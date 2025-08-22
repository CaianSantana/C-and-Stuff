#ifndef ESP32_GPIO_REGS_
#define ESP32_GPIO_REGS_

/*
** Processo de OUTPUT **

Habilita o pino (GPIO_ENABLE_REG).
    GPIO_ENABLE_REG  0x3FF44020 - precisa escrever no bit x do registrador

Roteia a função desejada para o pino (GPIO_FUNCx_OUT_SEL_CFG_REG).
    GPIO_FUNCx_OUT_SEL_CFG_REG Peripheral output selection for GPIO x  
    To configure a pin as simple GPIO output, the GPIO Matrix GPIO_FUNCx_OUT_SEL register is configured with a
    special peripheral index value (0x100).

Controla o valor de saída (GPIO_OUT_W1TS_REG / GPIO_OUT_W1TC_REG).
    GPIO_OUT_W1TS_REG 0x3FF44008 bit x to 1 para setar
    GPIO_OUT_W1TC_REG 0x3FF4400C bit x to 1 para limpar


GPIO:  0x3FF4_4000 - 0x3FF4_4FFF
GPIO_OUT_REG GPIO 0-31 output register 0x3FF44004
*/

typedef struct{
    uint32_t GPIO_FUNCn_OUT_SEL     :9;
    uint32_t GPIO_FUNCn_OUT_INV_SEL :1;
    uint32_t GPIO_FUNCn_OEN_SEL     :1;
    uint32_t GPIO_FUNCn_OEN_INV_SEL :1;
    uint32_t RESERVED               :20;
}GPIO_FUNCn_OUT_SEL_CFG_REG_t;


typedef union{
    uint32_t volatile value;
    struct{
        uint32_t PIN_0      :1;
        uint32_t PIN_1      :1;
        uint32_t PIN_2      :1;
        uint32_t PIN_3      :1;
        uint32_t PIN_4      :1;
        uint32_t PIN_5      :1;
        uint32_t PIN_6      :1;
        uint32_t PIN_7      :1;
        uint32_t PIN_8      :1;
        uint32_t PIN_9      :1;
        uint32_t PIN_10     :1;
        uint32_t PIN_11     :1;
        uint32_t PIN_12     :1;
        uint32_t PIN_13     :1;
        uint32_t PIN_14     :1;
        uint32_t PIN_15     :1;
        uint32_t PIN_16     :1;
        uint32_t PIN_17     :1;
        uint32_t PIN_18     :1;
        uint32_t PIN_19     :1;
        uint32_t PIN_20     :1;
        uint32_t PIN_21     :1;
        uint32_t PIN_22     :1;
        uint32_t PIN_23     :1;
        uint32_t PIN_24     :1;
        uint32_t PIN_25     :1;
        uint32_t PIN_26     :1;
        uint32_t PIN_27     :1;
        uint32_t PIN_28     :1;
        uint32_t PIN_29     :1;
        uint32_t PIN_30     :1;
        uint32_t PIN_31     :1;
    }volatile pin;
}GPIO_ENABLE_t;

typedef union{
    uint32_t volatile value;
    struct{
        uint32_t PIN_0      :1;
        uint32_t PIN_1      :1;
        uint32_t PIN_2      :1;
        uint32_t PIN_3      :1;
        uint32_t PIN_4      :1;
        uint32_t PIN_5      :1;
        uint32_t PIN_6      :1;
        uint32_t PIN_7      :1;
        uint32_t RESERVED   :24;
    } volatile pin;
}GPIO_ENABLE1_t;


typedef union{
    uint32_t volatile value;
    struct{
        uint32_t GPIO_OUT_DATA_0      :1;
        uint32_t GPIO_OUT_DATA_1      :1;
        uint32_t GPIO_OUT_DATA_2      :1;
        uint32_t GPIO_OUT_DATA_3      :1;
        uint32_t GPIO_OUT_DATA_4      :1;
        uint32_t GPIO_OUT_DATA_5      :1;
        uint32_t GPIO_OUT_DATA_6      :1;
        uint32_t GPIO_OUT_DATA_7      :1;
        uint32_t GPIO_OUT_DATA_8      :1;
        uint32_t GPIO_OUT_DATA_9      :1;
        uint32_t GPIO_OUT_DATA_10     :1;
        uint32_t GPIO_OUT_DATA_11     :1;
        uint32_t GPIO_OUT_DATA_12     :1;
        uint32_t GPIO_OUT_DATA_13     :1;
        uint32_t GPIO_OUT_DATA_14     :1;
        uint32_t GPIO_OUT_DATA_15     :1;
        uint32_t GPIO_OUT_DATA_16     :1;
        uint32_t GPIO_OUT_DATA_17     :1;
        uint32_t GPIO_OUT_DATA_18     :1;
        uint32_t GPIO_OUT_DATA_19     :1;
        uint32_t GPIO_OUT_DATA_20     :1;
        uint32_t GPIO_OUT_DATA_21     :1;
        uint32_t GPIO_OUT_DATA_22     :1;
        uint32_t GPIO_OUT_DATA_23     :1;
        uint32_t GPIO_OUT_DATA_24     :1;
        uint32_t GPIO_OUT_DATA_25     :1;
        uint32_t GPIO_OUT_DATA_26     :1;
        uint32_t GPIO_OUT_DATA_27     :1;
        uint32_t GPIO_OUT_DATA_28     :1;
        uint32_t GPIO_OUT_DATA_29     :1;
        uint32_t GPIO_OUT_DATA_30     :1;
        uint32_t GPIO_OUT_DATA_31     :1;
    } volatile pin;
}GPIO_OUT_t;

typedef union{
    uint32_t volatile value;
    struct{
        uint32_t GPIO_OUT_DATA_0      :1;
        uint32_t GPIO_OUT_DATA_1      :1;
        uint32_t GPIO_OUT_DATA_2      :1;
        uint32_t GPIO_OUT_DATA_3      :1;
        uint32_t GPIO_OUT_DATA_4      :1;
        uint32_t GPIO_OUT_DATA_5      :1;
        uint32_t GPIO_OUT_DATA_6      :1;
        uint32_t GPIO_OUT_DATA_7      :1;
        uint32_t RESERVED   :24;
    } volatile pin;
}GPIO_OUT1_t;

typedef union{
    uint32_t volatile value;
    struct{
        uint32_t GPIO_IN_DATA_0      :1;
        uint32_t GPIO_IN_DATA_1      :1;
        uint32_t GPIO_IN_DATA_2      :1;
        uint32_t GPIO_IN_DATA_3      :1;
        uint32_t GPIO_IN_DATA_4      :1;
        uint32_t GPIO_IN_DATA_5      :1;
        uint32_t GPIO_IN_DATA_6      :1;
        uint32_t GPIO_IN_DATA_7      :1;
        uint32_t GPIO_IN_DATA_8      :1;
        uint32_t GPIO_IN_DATA_9      :1;
        uint32_t GPIO_IN_DATA_10     :1;
        uint32_t GPIO_IN_DATA_11     :1;
        uint32_t GPIO_IN_DATA_12     :1;
        uint32_t GPIO_IN_DATA_13     :1;
        uint32_t GPIO_IN_DATA_14     :1;
        uint32_t GPIO_IN_DATA_15     :1;
        uint32_t GPIO_IN_DATA_16     :1;
        uint32_t GPIO_IN_DATA_17     :1;
        uint32_t GPIO_IN_DATA_18     :1;
        uint32_t GPIO_IN_DATA_19     :1;
        uint32_t GPIO_IN_DATA_20     :1;
        uint32_t GPIO_IN_DATA_21     :1;
        uint32_t GPIO_IN_DATA_22     :1;
        uint32_t GPIO_IN_DATA_23     :1;
        uint32_t GPIO_IN_DATA_24     :1;
        uint32_t GPIO_IN_DATA_25     :1;
        uint32_t GPIO_IN_DATA_26     :1;
        uint32_t GPIO_IN_DATA_27     :1;
        uint32_t GPIO_IN_DATA_28     :1;
        uint32_t GPIO_IN_DATA_29     :1;
        uint32_t GPIO_IN_DATA_30     :1;
        uint32_t GPIO_IN_DATA_31     :1;
    } volatile pin;
}GPIO_IN_t;

typedef union{
    uint32_t volatile value;
    struct{
        uint32_t GPIO_IN_DATA_NEXT_0      :1;
        uint32_t GPIO_IN_DATA_NEXT_1      :1;
        uint32_t GPIO_IN_DATA_NEXT_2      :1;
        uint32_t GPIO_IN_DATA_NEXT_3      :1;
        uint32_t GPIO_IN_DATA_NEXT_4      :1;
        uint32_t GPIO_IN_DATA_NEXT_5      :1;
        uint32_t GPIO_IN_DATA_NEXT_6      :1;
        uint32_t GPIO_IN_DATA_NEXT_7      :1;
        uint32_t RESERVED            :24;
    } volatile pin;
}GPIO_IN1_t;


typedef union{
    uint32_t volatile value;
    struct{
        uint32_t GPIO_STRAPPING_0       :1;
        uint32_t GPIO_STRAPPING_1       :1;
        uint32_t GPIO_STRAPPING_2       :1;
        uint32_t GPIO_STRAPPING_3       :1;
        uint32_t GPIO_STRAPPING_4       :1;
        uint32_t GPIO_STRAPPING_5       :1;
        uint32_t GPIO_STRAPPING_6       :1;
        uint32_t GPIO_STRAPPING_7       :1;
        uint32_t GPIO_STRAPPING_8       :1;
        uint32_t GPIO_STRAPPING_9       :1;
        uint32_t GPIO_STRAPPING_10      :1;
        uint32_t GPIO_STRAPPING_11      :1;
        uint32_t GPIO_STRAPPING_12      :1;
        uint32_t GPIO_STRAPPING_13      :1;
        uint32_t GPIO_STRAPPING_14      :1;
        uint32_t GPIO_STRAPPING_15      :1;
        uint32_t RESERVED               :16;
    } volatile pin;
}GPIO_STRAP_t;

typedef union{
    uint32_t volatile value;
    struct{
        uint32_t GPIO_STATUS_INT_0      :1;
        uint32_t GPIO_STATUS_INT_1      :1;
        uint32_t GPIO_STATUS_INT_2      :1;
        uint32_t GPIO_STATUS_INT_3      :1;
        uint32_t GPIO_STATUS_INT_4      :1;
        uint32_t GPIO_STATUS_INT_5      :1;
        uint32_t GPIO_STATUS_INT_6      :1;
        uint32_t GPIO_STATUS_INT_7      :1;
        uint32_t GPIO_STATUS_INT_8      :1;
        uint32_t GPIO_STATUS_INT_9      :1;
        uint32_t GPIO_STATUS_INT_10     :1;
        uint32_t GPIO_STATUS_INT_11     :1;
        uint32_t GPIO_STATUS_INT_12     :1;
        uint32_t GPIO_STATUS_INT_13     :1;
        uint32_t GPIO_STATUS_INT_14     :1;
        uint32_t GPIO_STATUS_INT_15     :1;
        uint32_t GPIO_STATUS_INT_16     :1;
        uint32_t GPIO_STATUS_INT_17     :1;
        uint32_t GPIO_STATUS_INT_18     :1;
        uint32_t GPIO_STATUS_INT_19     :1;
        uint32_t GPIO_STATUS_INT_20     :1;
        uint32_t GPIO_STATUS_INT_21     :1;
        uint32_t GPIO_STATUS_INT_22     :1;
        uint32_t GPIO_STATUS_INT_23     :1;
        uint32_t GPIO_STATUS_INT_24     :1;
        uint32_t GPIO_STATUS_INT_25     :1;
        uint32_t GPIO_STATUS_INT_26     :1;
        uint32_t GPIO_STATUS_INT_27     :1;
        uint32_t GPIO_STATUS_INT_28     :1;
        uint32_t GPIO_STATUS_INT_29     :1;
        uint32_t GPIO_STATUS_INT_30     :1;
        uint32_t GPIO_STATUS_INT_31     :1;
    } volatile pin;
}GPIO_STATUS_t;

typedef union{
    uint32_t volatile value;
    struct{
        uint32_t GPIO_STATUS_INT_0      :1;
        uint32_t GPIO_STATUS_INT_1      :1;
        uint32_t GPIO_STATUS_INT_2      :1;
        uint32_t GPIO_STATUS_INT_3      :1;
        uint32_t GPIO_STATUS_INT_4      :1;
        uint32_t GPIO_STATUS_INT_5      :1;
        uint32_t GPIO_STATUS_INT_6      :1;
        uint32_t GPIO_STATUS_INT_7      :1;
        uint32_t RESERVED            :24;
    } volatile pin;
}GPIO_STATUS1_t;

typedef union{
    uint32_t volatile value;
    struct{
        uint32_t GPIO_xCPU_0      :1;
        uint32_t GPIO_xCPU_1      :1;
        uint32_t GPIO_xCPU_2      :1;
        uint32_t GPIO_xCPU_3      :1;
        uint32_t GPIO_xCPU_4      :1;
        uint32_t GPIO_xCPU_5      :1;
        uint32_t GPIO_xCPU_6      :1;
        uint32_t GPIO_xCPU_7      :1;
        uint32_t GPIO_xCPU_8      :1;
        uint32_t GPIO_xCPU_9      :1;
        uint32_t GPIO_xCPU_10     :1;
        uint32_t GPIO_xCPU_11     :1;
        uint32_t GPIO_xCPU_12     :1;
        uint32_t GPIO_xCPU_13     :1;
        uint32_t GPIO_xCPU_14     :1;
        uint32_t GPIO_xCPU_15     :1;
        uint32_t GPIO_xCPU_16     :1;
        uint32_t GPIO_xCPU_17     :1;
        uint32_t GPIO_xCPU_18     :1;
        uint32_t GPIO_xCPU_19     :1;
        uint32_t GPIO_xCPU_20     :1;
        uint32_t GPIO_xCPU_21     :1;
        uint32_t GPIO_xCPU_22     :1;
        uint32_t GPIO_xCPU_23     :1;
        uint32_t GPIO_xCPU_24     :1;
        uint32_t GPIO_xCPU_25     :1;
        uint32_t GPIO_xCPU_26     :1;
        uint32_t GPIO_xCPU_27     :1;
        uint32_t GPIO_xCPU_28     :1;
        uint32_t GPIO_xCPU_29     :1;
        uint32_t GPIO_xCPU_30     :1;
        uint32_t GPIO_xCPU_31     :1;
    } volatile pin;
}GPIO_xCPU_INT_t;

typedef union{
    uint32_t volatile value;
    struct{
        uint32_t GPIO_xCPU_0      :1;
        uint32_t GPIO_xCPU_1      :1;
        uint32_t GPIO_xCPU_2      :1;
        uint32_t GPIO_xCPU_3      :1;
        uint32_t GPIO_xCPU_4      :1;
        uint32_t GPIO_xCPU_5      :1;
        uint32_t GPIO_xCPU_6      :1;
        uint32_t GPIO_xCPU_7      :1;
        uint32_t RESERVED            :24;
    } volatile pin;
}GPIO_xCPU_INT1_t;



typedef union {
    volatile uint32_t val;
    volatile struct {
        uint32_t RESERVED_0       : 2; 
        uint32_t PAD_DRIVER       : 1; 
        uint32_t RESERVED_1       : 4; 
        uint32_t PULLUP_EN        : 1; 
        uint32_t PULLDOWN_EN      : 1; 
        uint32_t INT_TYPE         : 3; 
        uint32_t WAKEUP_ENABLE    : 1; 
        uint32_t INT_ENA          : 1; 
        uint32_t RESERVED_2       : 18;
    } pin;
} GPIO_PINn_t;



typedef struct {
    volatile uint32_t                BT_SELECT;          // Offset 0x0000
    volatile GPIO_OUT_t              OUT;                // Offset 0x0004
    volatile GPIO_OUT_t              OUT_W1TS;           // Offset 0x0008
    volatile GPIO_OUT_t              OUT_W1TC;           // Offset 0x000C
    volatile uint32_t                SDIO_SELECT;        // Offset 0x0010 (Estava faltando)
    volatile GPIO_OUT1_t             OUT1;               // Offset 0x0014
    volatile GPIO_OUT1_t             OUT1_W1TS;          // Offset 0x0018
    volatile GPIO_OUT1_t             OUT1_W1TC;          // Offset 0x001C
    volatile GPIO_ENABLE_t           ENABLE;             // Offset 0x0020
    volatile GPIO_ENABLE_t           ENABLE_W1TS;        // Offset 0x0024
    volatile GPIO_ENABLE_t           ENABLE_W1TC;        // Offset 0x0028
    volatile GPIO_ENABLE1_t          ENABLE1;            // Offset 0x002C
    volatile GPIO_ENABLE1_t          ENABLE1_W1TS;       // Offset 0x0030
    volatile GPIO_ENABLE1_t          ENABLE1_W1TC;       // Offset 0x0034
    volatile GPIO_STRAP_t            STRAP;              // Offset 0x0038
    volatile GPIO_IN_t               IN;                 // Offset 0x003C
    volatile GPIO_IN1_t              IN1;                // Offset 0x0040
    volatile GPIO_STATUS_t           STATUS;             // Offset 0x0044
    volatile GPIO_STATUS_t           STATUS_W1TS;        // Offset 0x0048
    volatile GPIO_STATUS_t           STATUS_W1TC;        // Offset 0x004C
    volatile GPIO_STATUS1_t          STATUS1;            // Offset 0x0050
    volatile GPIO_STATUS1_t          STATUS1_W1TS;       // Offset 0x0054
    volatile GPIO_STATUS1_t          STATUS1_W1TC;       // Offset 0x0058
    volatile uint32_t                RESERVED_5C;        // Offset 0x005C
    volatile GPIO_xCPU_INT_t         ACPU_INT;           // Offset 0x0060
    volatile GPIO_xCPU_INT_t         ACPU_NMI_INT;       // Offset 0x0064
    volatile GPIO_xCPU_INT_t         PCPU_INT;           // Offset 0x0068
    volatile GPIO_xCPU_INT_t         PCPU_NMI_INT;       // Offset 0x006C
    volatile GPIO_xCPU_INT1_t        ACPU_INT1;          // Offset 0x0070 
    volatile GPIO_xCPU_INT1_t        ACPU_NMI_INT1;      // Offset 0x0074
    volatile GPIO_xCPU_INT1_t        PCPU_INT1;          // Offset 0x0078
    volatile GPIO_xCPU_INT1_t        PCPU_NMI_INT1;      // Offset 0x007C 
    volatile uint32_t                RESERVED_GAP[2];    // Offset 0x0080 e 0x0084 
    volatile GPIO_PINn_t             PIN[40];            // Offset 0x0088

} GPIO_DEV_t;

#endif