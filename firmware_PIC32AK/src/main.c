// Main.c


// FCP
#pragma config FCP_CP = OFF             // Memory protection enable bit (Memory protection is disabled)
#pragma config FCP_CRC = OFF            // CRC enable bit (CRC is disabled)
#pragma config FCP_WPUCA = OFF          // User configuration areas write protection enable bits (Protection is disabled)

// FICD
#pragma config FICD_JTAGEN = OFF        // JTAG enable bit (JTAG is disabled)

// FDEVOPT
#pragma config FDEVOPT_ALTI2C1 = ON     // Alternate I2C1 pins selection bit (Alternate I2C1 pins are used)
#pragma config FDEVOPT_ALTI2C2 = ON     // Alternate I2C2 pins selection bit (Alternate I2C2 pins are used)
#pragma config FDEVOPT_BISTDIS = OFF    // Hardware RAM test disable bit (RAM test after reset is enabled)
#pragma config FDEVOPT_SPI2PIN = ON     // SPI2 peripheral pin selection disable bit (SPI2 uses direct connections with specified device pins)

// FWDT
#pragma config FWDT_WINDIS = ON         // Watchdog Timer Window Disable bit (Watchdog Timer operates in Non-Window mode)
#pragma config FWDT_SWDTMPS = PS2147483648// Sleep Mode Watchdog Timer Post Scaler select bits (1:2147483648)
#pragma config FWDT_RCLKSEL = BFRC256   // Watchdog Timer Clock select bits (WDT Run Mode uses BFRC:256)
#pragma config FWDT_RWDTPS = PS2147483648// Run Mode Watchdog Timer Post Scaler select bits (1:2147483648)
#pragma config FWDT_WDTWIN = WIN25      // Watchdog Timer Window Size Select bits (WDT Window is 25% of WDT period)
#pragma config FWDT_WDTEN = SW          // Watchdog Timer Enable bit (WDT is controlled by software, use WDTCON.ON bit)
#pragma config FWDT_WDTRSTEN = ON       // Watchdog Timer Reset Enable bit (WDT event generates a reset)

// FPR0CTRL
#pragma config FPR0CTRL_RDIS = ON       // Region protection disable bit (Protection is disabled)
#pragma config FPR0CTRL_EX = ON         // Execute permission bit (Code execution is enabled)
#pragma config FPR0CTRL_RD = ON         // Read permission bit (Read operation is enabled)
#pragma config FPR0CTRL_WR = ON         // Write permission bit (Write and erase operation is enabled)
#pragma config FPR0CTRL_CRC = ON        // CRC enable bit (NVM controller CRC calculation is enabled)
#pragma config FPR0CTRL_RTYPE = FIRMWARE// Region type selection bits (Firmware configurable region)

// FPR0ST
#pragma config FPR0ST_START = 0x0       // Region start address bits (Enter Hexadecimal value)

// FPR0END
#pragma config FPR0END_END = 0x0        // Region end address bits (Enter Hexadecimal value)

// FPR1CTRL
#pragma config FPR1CTRL_RDIS = ON       // Region protection disable bit (Protection is disabled)
#pragma config FPR1CTRL_EX = ON         // Execute permission bit (Code execution is enabled)
#pragma config FPR1CTRL_RD = ON         // Read permission bit (Read operation is enabled)
#pragma config FPR1CTRL_WR = ON         // Write permission bit (Write and erase operation is enabled)
#pragma config FPR1CTRL_CRC = ON        // CRC enable bit (NVM controller CRC calculation is enabled)
#pragma config FPR1CTRL_RTYPE = FIRMWARE// Region type selection bits (Firmware configurable region)

// FPR1ST
#pragma config FPR1ST_START = 0x0       // Region start address bits (Enter Hexadecimal value)

// FPR1END
#pragma config FPR1END_END = 0x0        // Region end address bits (Enter Hexadecimal value)

// FPR2CTRL
#pragma config FPR2CTRL_RDIS = ON       // Region protection disable bit (Protection is disabled)
#pragma config FPR2CTRL_EX = ON         // Execute permission bit (Code execution is enabled)
#pragma config FPR2CTRL_RD = ON         // Read permission bit (Read operation is enabled)
#pragma config FPR2CTRL_WR = ON         // Write permission bit (Write and erase operation is enabled)
#pragma config FPR2CTRL_CRC = ON        // CRC enable bit (NVM controller CRC calculation is enabled)
#pragma config FPR2CTRL_RTYPE = FIRMWARE// Region type selection bits (Firmware configurable region)

// FPR2ST
#pragma config FPR2ST_START = 0x0       // Region start address bits (Enter Hexadecimal value)

// FPR2END
#pragma config FPR2END_END = 0x0        // Region end address bits (Enter Hexadecimal value)

// FPR3CTRL
#pragma config FPR3CTRL_RDIS = ON       // Region protection disable bit (Protection is disabled)
#pragma config FPR3CTRL_EX = ON         // Execute permission bit (Code execution is enabled)
#pragma config FPR3CTRL_RD = ON         // Read permission bit (Read operation is enabled)
#pragma config FPR3CTRL_WR = ON         // Write permission bit (Write and erase operation is enabled)
#pragma config FPR3CTRL_CRC = ON        // CRC enable bit (NVM controller CRC calculation is enabled)
#pragma config FPR3CTRL_RTYPE = FIRMWARE// Region type selection bits (Firmware configurable region)

// FPR3ST
#pragma config FPR3ST_START = 0x0       // Region start address bits (Enter Hexadecimal value)

// FPR3END
#pragma config FPR3END_END = 0x0        // Region end address bits (Enter Hexadecimal value)

// FPR4CTRL
#pragma config FPR4CTRL_RDIS = ON       // Region protection disable bit (Protection is disabled)
#pragma config FPR4CTRL_EX = ON         // Execute permission bit (Code execution is enabled)
#pragma config FPR4CTRL_RD = ON         // Read permission bit (Read operation is enabled)
#pragma config FPR4CTRL_WR = ON         // Write permission bit (Write and erase operation is enabled)
#pragma config FPR4CTRL_CRC = ON        // CRC enable bit (NVM controller CRC calculation is enabled)
#pragma config FPR4CTRL_RTYPE = FIRMWARE// Region type selection bits (Firmware configurable region)

// FPR4ST
#pragma config FPR4ST_START = 0x0       // Region start address bits (Enter Hexadecimal value)

// FPR4END
#pragma config FPR4END_END = 0x0        // Region end address bits (Enter Hexadecimal value)

// FPR5CTRL
#pragma config FPR5CTRL_RDIS = ON       // Region protection disable bit (Protection is disabled)
#pragma config FPR5CTRL_EX = ON         // Execute permission bit (Code execution is enabled)
#pragma config FPR5CTRL_RD = ON         // Read permission bit (Read operation is enabled)
#pragma config FPR5CTRL_WR = ON         // Write permission bit (Write and erase operation is enabled)
#pragma config FPR5CTRL_CRC = ON        // CRC enable bit (NVM controller CRC calculation is enabled)
#pragma config FPR5CTRL_RTYPE = FIRMWARE// Region type selection bits (Firmware configurable region)

// FPR5ST
#pragma config FPR5ST_START = 0x0       // Region start address bits (Enter Hexadecimal value)

// FPR5END
#pragma config FPR5END_END = 0x0        // Region end address bits (Enter Hexadecimal value)

// FPR6CTRL
#pragma config FPR6CTRL_RDIS = ON       // Region protection disable bit (Protection is disabled)
#pragma config FPR6CTRL_EX = ON         // Execute permission bit (Code execution is enabled)
#pragma config FPR6CTRL_RD = ON         // Read permission bit (Read operation is enabled)
#pragma config FPR6CTRL_WR = ON         // Write permission bit (Write and erase operation is enabled)
#pragma config FPR6CTRL_CRC = ON        // CRC enable bit (NVM controller CRC calculation is enabled)
#pragma config FPR6CTRL_RTYPE = FIRMWARE// Region type selection bits (Firmware configurable region)

// FPR6ST
#pragma config FPR6ST_START = 0x0       // Region start address bits (Enter Hexadecimal value)

// FPR6END
#pragma config FPR6END_END = 0x0        // Region end address bits (Enter Hexadecimal value)

// FPR7CTRL
#pragma config FPR7CTRL_RDIS = ON       // Region protection disable bit (Protection is disabled)
#pragma config FPR7CTRL_EX = ON         // Execute permission bit (Code execution is enabled)
#pragma config FPR7CTRL_RD = ON         // Read permission bit (Read operation is enabled)
#pragma config FPR7CTRL_WR = ON         // Write permission bit (Write and erase operation is enabled)
#pragma config FPR7CTRL_CRC = ON        // CRC enable bit (NVM controller CRC calculation is enabled)
#pragma config FPR7CTRL_RTYPE = FIRMWARE// Region type selection bits (Firmware configurable region)

// FPR7ST
#pragma config FPR7ST_START = 0x0       // Region start address bits (Enter Hexadecimal value)

// FPR7END
#pragma config FPR7END_END = 0x0        // Region end address bits (Enter Hexadecimal value)

// FIRT
#pragma config FIRT_IRT = OFF           // Immutable Root of Trust enable bit (Immutable root of trust (IRT) regions are disabled)

// FSECDBG
#pragma config FSECDBG_SECDBG = OFF     // Secure debug enable bit (Secure debug is disabled)

// FPED
#pragma config FPED_ICSPPED = OFF       // ICSP Program and Erase disable bit (ICSP can program and erase)

// FEPUCB
#pragma config FEPUCB_EPUCB = 0xFFFFFFFF// UCB erase protection bits (Enter Hexadecimal value)

// FWPUCB
#pragma config FWPUCB_WPUCB = 0xFFFFFFFF// UCB write protection bits (Enter Hexadecimal value)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <stddef.h>                     // Defines NULL
#include <stdbool.h>                    // Defines true
#include <stdlib.h>                     // Defines EXIT_FAILURE

#include "pic32ak_generic.h"
#include "timer.h"
#include "UART.h"
#include "i2c.h"

// Access to TIMER struct members
extern STRUCT_TIMER TIMER_struct[TIMER_QTY];
STRUCT_TIMER *TIMER1_struct = &TIMER_struct[TIMER_1];

// Access to LED struct members
extern STRUCT_LED LED_struct[LED_QTY];
STRUCT_LED *LED1_struct = &LED_struct[LED_1];
STRUCT_LED *LED2_struct = &LED_struct[LED_2];

// Access to BTN struct members
extern STRUCT_BUTTON BUTTON_struct[BTN_QTY];
STRUCT_BUTTON *BTN1_struct = &BUTTON_struct[BTN_1];

// Access to UART struct members
extern STRUCT_UART UART_struct[UART_QTY];
STRUCT_UART *UART1_struct = &UART_struct[UART_1];
STRUCT_UART *UART2_struct = &UART_struct[UART_1];

// Access to I2C struct members
extern STRUCT_I2C I2C_struct[I2C_QTY];
STRUCT_I2C *I2C1_struct = &I2C_struct[I2C_1];

uint32_t counter_1ms = 0;

uint8_t i2c1_data[3] = {0x66, 0, 0};

// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************

int main ( void )
{
    /* Initialize all modules */

    PIC32AK_init();
    TIMER_init(TIMER1_struct, TIMER_1, TIMER_PRESCALER_1, 1000);    //  1000Hz (1ms) timer
        
    //  Configure GPIOs
    //  Configure on-board LEDs
    RPI_CMx_LED_init(LED1_struct, LED_1, LOW);
    RPI_CMx_LED_init(LED2_struct, LED_2, LOW);
    
    //  Configure on-board Buttons
    RPI_CMx_BTN_init(BTN1_struct, BTN_1, 25);

    //  Configure debug UART
    UART_init(UART1_struct, UART_1, 115200, 256, 256, 0);
    UART_putstr(UART1_struct, "RPI_CMx_Carrier PIC32 Debug UART enabled\r\n");
    TRISBbits.TRISB8 = 0;   //  WDOG pin is output
    LATBbits.LATB8 = 0;     
    
    // Configure I2C1
    I2C_init(I2C1_struct, I2C_1, I2C_FREQ_100k, I2C_mode_master, 0);
    //I2C_master_write(I2C1_struct, i2c1_data, 3);
    
    TIMER_start(TIMER1_struct);
      
    while (1)
    {     
        if (TIMER_get_state(TIMER1_struct, TIMER_INT_STATE))    //  1ms tick
        {    
            LATBbits.LATB8 = !LATBbits.LATB8;   // Cycle WDOG
            
            if (++counter_1ms >= 500)
            {
                i2c1_data[1] = !i2c1_data[1];
                i2c1_data[2] = !i2c1_data[2];
                RPI_CMx_LED_toggle(LED1_struct);
                RPI_CMx_LED_toggle(LED2_struct);
                UART_putstr(UART1_struct, "RPI_CMx_Carrier PIC32 Debug UART TX by interrupt\r\n");
                //I2C_master_write(I2C1_struct, i2c1_data, 3);
                counter_1ms = 0;
            }
        }
    }

    /* Execution should not come here during normal operation */
    return ( EXIT_FAILURE );
}