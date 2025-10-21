#ifndef __WINE_OPENXR_PRIVATE_H
#define __WINE_OPENXR_PRIVATE_H

#define WINE_XR_HOST

#include <pthread.h>
#include <stdbool.h>

#include "openxr_loader.h"
#include "openxr_thunks.h"

extern struct openxr_instance_funcs g_xr_host_instance_dispatch_table;

struct conversion_context {
  char buffer[2048];
  uint32_t used;
  struct list alloc_entries;
};

static inline void init_conversion_context(struct conversion_context *pool) {
  pool->used = 0;
  list_init(&pool->alloc_entries);
}

static inline void free_conversion_context(struct conversion_context *pool) {
  struct list *entry, *next;
  LIST_FOR_EACH_SAFE(entry, next, &pool->alloc_entries)
  free(entry);
}

static inline void *conversion_context_alloc(struct conversion_context *pool, size_t size) {
  if (pool->used + size <= sizeof(pool->buffer)) {
    void *ret = pool->buffer + pool->used;
    pool->used += (size + sizeof(UINT64) - 1) & ~(sizeof(UINT64) - 1);
    return ret;
  } else {
    struct list *entry;
    if (!(entry = malloc(sizeof(*entry) + size))) {
      return NULL;
    }
    list_add_tail(&pool->alloc_entries, entry);
    return entry + 1;
  }
}

NTSTATUS init_openxr(void *args);
NTSTATUS is_available_instance_function_openxr(void *args);
NTSTATUS get_vk_create_callback_ptrs(void *args);
extern void register_dispatchable_handle(uint64_t handle, struct openxr_instance_funcs *funcs);
extern void unregister_dispatchable_handle(uint64_t handle);
extern struct openxr_instance_funcs *get_dispatch_table(uint64_t handle);

#define MEMDUP(ctx, dst, src, count)                               \
  dst = conversion_context_alloc((ctx), sizeof(*(dst)) * (count)); \
  memcpy((void *)(dst), (src), sizeof(*(dst)) * (count));
#define MEMDUP_VOID(ctx, dst, src, size)       \
  dst = conversion_context_alloc((ctx), size); \
  memcpy((void *)(dst), (src), size);

#endif /* __WINE_OPENXR_PRIVATE_H */
