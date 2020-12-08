/* generated vector header file - do not edit */
        #ifndef VECTOR_DATA_H
        #define VECTOR_DATA_H
                /* Number of interrupts allocated */
        #ifndef VECTOR_DATA_IRQ_COUNT
        #define VECTOR_DATA_IRQ_COUNT    (1)
        #endif
        /* ISR prototypes */
        void gpt_counter_overflow_isr(void);

        /* Vector table allocations */
        #define VECTOR_NUMBER_GPT0_COUNTER_OVERFLOW ((IRQn_Type) 0) /* GPT0 COUNTER OVERFLOW (Overflow) */
        typedef enum IRQn {
            Reset_IRQn = -15,
            NonMaskableInt_IRQn = -14,
            HardFault_IRQn = -13,
            MemoryManagement_IRQn = -12,
            BusFault_IRQn = -11,
            UsageFault_IRQn = -10,
            SecureFault_IRQn = -9,
            SVCall_IRQn = -5,
            DebugMonitor_IRQn = -4,
            PendSV_IRQn = -2,
            SysTick_IRQn = -1,
            GPT0_COUNTER_OVERFLOW_IRQn = 0, /* GPT0 COUNTER OVERFLOW (Overflow) */
        } IRQn_Type;
        #endif /* VECTOR_DATA_H */