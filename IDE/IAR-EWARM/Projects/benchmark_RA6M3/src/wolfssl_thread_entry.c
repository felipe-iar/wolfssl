#include "wolfssl_thread.h"
#include <wolfssl/wolfcrypt/settings.h>
#include <wolfcrypt/benchmark/benchmark.h>

/* QnD patch: to provide __iar_data_init3() */
__root int __dummy(void) { __iar_data_init3(); return 1; }

                /* New Thread entry function */
                /* pvParameters contains TaskHandle_t */
                void wolfssl_thread_entry(void * pvParameters)
                {
                    FSP_PARAMETER_NOT_USED(pvParameters);
                    benchmark_test(NULL);
                    while(1)
                    {
                        vTaskDelay(1);
                    }
                }
