#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "fuzz_helpers.h"

/* Struct used for maintaining the state of the data */
typedef struct FUZZ_dataProducer_s FUZZ_dataProducer_t;

/* Returns a data producer state struct. Use for producer initialization. */
FUZZ_dataProducer_t *FUZZ_dataProducer_create(const uint8_t *data, size_t size);

/* Frees the data producer */
void FUZZ_dataProducer_free(FUZZ_dataProducer_t *producer);

/* Returns value between [min, max] */
uint32_t FUZZ_dataProducer_uint32(FUZZ_dataProducer_t *producer, uint32_t min,
                                  uint32_t max);

/* Returns the size of the remaining bytes of data in the producer */
size_t FUZZ_dataProducer_remainingBytes(FUZZ_dataProducer_t *producer);
