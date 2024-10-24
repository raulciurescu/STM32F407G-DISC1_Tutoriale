#include "ex3.h"
#include "main.h"

void ex3()
{
    int clk = 0;
    while (1) {

        if (clk == 0) {
            HAL_GPIO_WritePin(GPIOD, LD3_Pin, GPIO_PIN_SET);   // LED LD3 ON
        } else if (clk == 1) {
            //HAL_GPIO_WritePin(GPIOD, LD4_Pin, GPIO_PIN_SET);   // LED LD4 ON
        } else if (clk == 2) {
            //HAL_GPIO_WritePin(GPIOD, LD6_Pin, GPIO_PIN_SET);   // LED LD6 ON
        } else if (clk == 3) {
            HAL_GPIO_WritePin(GPIOD, LD5_Pin, GPIO_PIN_SET);   // LED LD5 ON
        }


        if (HAL_GPIO_ReadPin(GPIOA, PA0)) {
            clk++;


            HAL_Delay(200);


//            HAL_GPIO_WritePin(GPIOD, LD3_Pin, GPIO_PIN_RESET);
//            HAL_GPIO_WritePin(GPIOD, LD4_Pin, GPIO_PIN_RESET);
//            HAL_GPIO_WritePin(GPIOD, LD5_Pin, GPIO_PIN_RESET);
//            HAL_GPIO_WritePin(GPIOD, LD6_Pin, GPIO_PIN_RESET);
        }

            if (clk == 4) {
                clk = 0;
            }
        }


        HAL_Delay(100);
    }
