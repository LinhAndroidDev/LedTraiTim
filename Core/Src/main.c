#include "main.h"

uint8_t status;
int k = 0;
static void MX_GPIO_Init(void);
void SangHetLed();
void TatHetLed();
void SangLanLuotXuoi(); //Theo chieu kim dong ho
void SangLanLuotNguoc();
void SangDanXenLe();
void SangDanXenChan();
void SystemClock_Config(void);

int main(void)
{
  HAL_Init();

  SystemClock_Config();

  MX_GPIO_Init();

  while (1)
  {

			  SangLanLuotXuoi();
			  TatHetLed();
			  HAL_Delay(1000);
			  SangLanLuotNguoc();
			  TatHetLed();
			  HAL_Delay(1000);

			  for(int i = 0; i < 2; i++){
				  SangDanXenLe();
				  HAL_Delay(1000);
				  TatHetLed();
				  SangDanXenChan();
				  HAL_Delay(1000);
				  TatHetLed();
			  }
//	  if(HAL_GPIO_ReadPin(BUTTON_GPIO_Port, BUTTON_Pin) == 0){
//	  		  while(HAL_GPIO_ReadPin(BUTTON_GPIO_Port, BUTTON_Pin) == 0){}
//	  		  status =~ status;
//	  		  HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, status);
//
//	  		SangLanLuotXuoi();
//			  TatHetLed();
//			  HAL_Delay(1000);
//			  SangLanLuotNguoc();
//			  TatHetLed();
//			  HAL_Delay(1000);
//
//			  for(int i = 0; i < 2; i++){
//				  SangDanXenLe();
//				  HAL_Delay(1000);
//				  TatHetLed();
//				  SangDanXenChan();
//				  HAL_Delay(1000);
//				  TatHetLed();
//			  }

//	  		if(k == 0){
//			  SangHetLed();
//			  k = 1;
//		  }else if(k == 1){
//			  TatHetLed();
//			  k = 2;
//		  }
//		  else if(k == 2){
//			  TatHetLed();
//			  SangLanLuotXuoi();
//			  TatHetLed();
//			  HAL_Delay(1000);
//			  SangLanLuotNguoc();
//			  TatHetLed();
//			  HAL_Delay(1000);
//			  k = 3;
//		  }else if(k == 3){
//			  while(1){
//				  TatHetLed();
//				  SangDanXenLe();
//				  HAL_Delay(1000);
//				  TatHetLed();
//				  SangDanXenChan();
//				  HAL_Delay(1000);
//				  TatHetLed();
//			  }
//		  }
  }
  }
  /* USER CODE END 3 */


void SangHetLed(){
	HAL_GPIO_WritePin(GPIOA, LED_Pin, GPIO_PIN_SET);	 // Sáng đèn D1
	HAL_GPIO_WritePin(GPIOA, LEDA1_Pin, GPIO_PIN_SET);	 // Sáng đèn D2
	HAL_GPIO_WritePin(GPIOA, LEDA2_Pin, GPIO_PIN_SET);	 // Sáng đèn D3
	HAL_GPIO_WritePin(GPIOA, LEDA3_Pin, GPIO_PIN_SET);	 // Sáng đèn D4
	HAL_GPIO_WritePin(GPIOA, LEDA4_Pin, GPIO_PIN_SET);	 // Sáng đèn D5
	HAL_GPIO_WritePin(GPIOA, LEDA5_Pin, GPIO_PIN_SET);	 // Sáng đèn D6
	HAL_GPIO_WritePin(GPIOA, LEDA6_Pin, GPIO_PIN_SET);	 // Sáng đèn D7
	HAL_GPIO_WritePin(GPIOA, LEDA7_Pin, GPIO_PIN_SET);	 // Sáng đèn D8
	HAL_GPIO_WritePin(GPIOA, LEDA8_Pin, GPIO_PIN_SET);	 // Sáng đèn D9
	HAL_GPIO_WritePin(GPIOA, LEDA9_Pin, GPIO_PIN_SET);	 // Sáng đèn D10
	HAL_GPIO_WritePin(GPIOA, LEDA10_Pin, GPIO_PIN_SET);	 // Sáng đèn D11
	HAL_GPIO_WritePin(GPIOA, LEDA11_Pin, GPIO_PIN_SET);	 // Sáng đèn D12
	HAL_GPIO_WritePin(GPIOA, LEDA12_Pin, GPIO_PIN_SET);	 // Sáng đèn D13
	HAL_GPIO_WritePin(GPIOB, LEDB0_Pin, GPIO_PIN_SET);	 // Sáng đèn D14
	HAL_GPIO_WritePin(GPIOB, LEDB1_Pin, GPIO_PIN_SET);	 // Sáng đèn D15
	HAL_GPIO_WritePin(GPIOB, LEDB13_Pin, GPIO_PIN_SET);	 // Sáng đèn D16

	HAL_GPIO_WritePin(GPIOB, LEDB14_Pin, GPIO_PIN_SET);	 // Sáng đèn D17
	HAL_GPIO_WritePin(GPIOB, LEDB5_Pin, GPIO_PIN_SET);	 // Sáng đèn D18
	HAL_GPIO_WritePin(GPIOB, LEDB6_Pin, GPIO_PIN_SET);	 // Sáng đèn D19
	HAL_GPIO_WritePin(GPIOB, LEDB7_Pin, GPIO_PIN_SET);	 // Sáng đèn D20
	HAL_GPIO_WritePin(GPIOB, LEDB8_Pin, GPIO_PIN_SET);	 // Sáng đèn D21
	HAL_GPIO_WritePin(GPIOB, LEDB9_Pin, GPIO_PIN_SET);	 // Sáng đèn D22
}

void TatHetLed(){
	HAL_GPIO_WritePin(GPIOA, LED_Pin, GPIO_PIN_RESET);	 // Sáng đèn D1
		HAL_GPIO_WritePin(GPIOA, LEDA1_Pin, GPIO_PIN_RESET);	 // Sáng đèn D2
		HAL_GPIO_WritePin(GPIOA, LEDA2_Pin, GPIO_PIN_RESET);	 // Sáng đèn D3
		HAL_GPIO_WritePin(GPIOA, LEDA3_Pin, GPIO_PIN_RESET);	 // Sáng đèn D4
		HAL_GPIO_WritePin(GPIOA, LEDA4_Pin, GPIO_PIN_RESET);	 // Sáng đèn D5
		HAL_GPIO_WritePin(GPIOA, LEDA5_Pin, GPIO_PIN_RESET);	 // Sáng đèn D6
		HAL_GPIO_WritePin(GPIOA, LEDA6_Pin, GPIO_PIN_RESET);	 // Sáng đèn D7
		HAL_GPIO_WritePin(GPIOA, LEDA7_Pin, GPIO_PIN_RESET);	 // Sáng đèn D8
		HAL_GPIO_WritePin(GPIOA, LEDA8_Pin, GPIO_PIN_RESET);	 // Sáng đèn D9
		HAL_GPIO_WritePin(GPIOA, LEDA9_Pin, GPIO_PIN_RESET);	 // Sáng đèn D10
		HAL_GPIO_WritePin(GPIOA, LEDA10_Pin, GPIO_PIN_RESET);	 // Sáng đèn D11
		HAL_GPIO_WritePin(GPIOA, LEDA11_Pin, GPIO_PIN_RESET);	 // Sáng đèn D12
		HAL_GPIO_WritePin(GPIOA, LEDA12_Pin, GPIO_PIN_RESET);	 // Sáng đèn D13
		HAL_GPIO_WritePin(GPIOB, LEDB0_Pin, GPIO_PIN_RESET);	 // Sáng đèn D14
		HAL_GPIO_WritePin(GPIOB, LEDB1_Pin, GPIO_PIN_RESET);	 // Sáng đèn D15
		HAL_GPIO_WritePin(GPIOB, LEDB13_Pin, GPIO_PIN_RESET);	 // Sáng đèn D16

		HAL_GPIO_WritePin(GPIOB, LEDB14_Pin, GPIO_PIN_RESET);	 // Sáng đèn D17
		HAL_GPIO_WritePin(GPIOB, LEDB5_Pin, GPIO_PIN_RESET);	 // Sáng đèn D18
		HAL_GPIO_WritePin(GPIOB, LEDB6_Pin, GPIO_PIN_RESET);	 // Sáng đèn D19
		HAL_GPIO_WritePin(GPIOB, LEDB7_Pin, GPIO_PIN_RESET);	 // Sáng đèn D20
		HAL_GPIO_WritePin(GPIOB, LEDB8_Pin, GPIO_PIN_RESET);	 // Sáng đèn D21
		HAL_GPIO_WritePin(GPIOB, LEDB9_Pin, GPIO_PIN_RESET);	 // Sáng đèn D22
}

void SangLanLuotXuoi(){
	TatHetLed();
	HAL_GPIO_WritePin(GPIOA, LED_Pin, GPIO_PIN_SET);	 // Sáng đèn D1
	HAL_Delay(200);
	HAL_GPIO_WritePin(GPIOA, LEDA1_Pin, GPIO_PIN_SET);	 // Sáng đèn D2
	HAL_Delay(200);
	HAL_GPIO_WritePin(GPIOA, LEDA2_Pin, GPIO_PIN_SET);	 // Sáng đèn D3
	HAL_Delay(200);
	HAL_GPIO_WritePin(GPIOA, LEDA3_Pin, GPIO_PIN_SET);	 // Sáng đèn D4
	HAL_Delay(200);
	HAL_GPIO_WritePin(GPIOA, LEDA4_Pin, GPIO_PIN_SET);	 // Sáng đèn D5
	HAL_Delay(200);
	HAL_GPIO_WritePin(GPIOA, LEDA5_Pin, GPIO_PIN_SET);	 // Sáng đèn D6
	HAL_Delay(200);
	HAL_GPIO_WritePin(GPIOA, LEDA6_Pin, GPIO_PIN_SET);	 // Sáng đèn D7
	HAL_Delay(200);
	HAL_GPIO_WritePin(GPIOA, LEDA7_Pin, GPIO_PIN_SET);	 // Sáng đèn D8
	HAL_Delay(200);
	HAL_GPIO_WritePin(GPIOA, LEDA8_Pin, GPIO_PIN_SET);	 // Sáng đèn D9
	HAL_Delay(200);
	HAL_GPIO_WritePin(GPIOA, LEDA9_Pin, GPIO_PIN_SET);	 // Sáng đèn D10
	HAL_Delay(200);
	HAL_GPIO_WritePin(GPIOA, LEDA10_Pin, GPIO_PIN_SET);	 // Sáng đèn D11
	HAL_Delay(200);
	HAL_GPIO_WritePin(GPIOA, LEDA11_Pin, GPIO_PIN_SET);	 // Sáng đèn D12
	HAL_Delay(200);
	HAL_GPIO_WritePin(GPIOA, LEDA12_Pin, GPIO_PIN_SET);	 // Sáng đèn D13
	HAL_Delay(200);
	HAL_GPIO_WritePin(GPIOB, LEDB0_Pin, GPIO_PIN_SET);	 // Sáng đèn D14
	HAL_Delay(200);
	HAL_GPIO_WritePin(GPIOB, LEDB1_Pin, GPIO_PIN_SET);	 // Sáng đèn D15
	HAL_Delay(200);
	HAL_GPIO_WritePin(GPIOB, LEDB13_Pin, GPIO_PIN_SET);	 // Sáng đèn D16
	HAL_Delay(200);
	HAL_GPIO_WritePin(GPIOB, LEDB14_Pin, GPIO_PIN_SET);	 // Sáng đèn D17
	HAL_Delay(200);
	HAL_GPIO_WritePin(GPIOB, LEDB5_Pin, GPIO_PIN_SET);	 // Sáng đèn D18
	HAL_Delay(200);
	HAL_GPIO_WritePin(GPIOB, LEDB6_Pin, GPIO_PIN_SET);	 // Sáng đèn D19
	HAL_Delay(200);
	HAL_GPIO_WritePin(GPIOB, LEDB7_Pin, GPIO_PIN_SET);	 // Sáng đèn D20
	HAL_Delay(200);
	HAL_GPIO_WritePin(GPIOB, LEDB8_Pin, GPIO_PIN_SET);	 // Sáng đèn D21
	HAL_Delay(200);
	HAL_GPIO_WritePin(GPIOB, LEDB9_Pin, GPIO_PIN_SET);	 // Sáng đèn D22
	HAL_Delay(200);
}

void SangLanLuotNguoc(){
	TatHetLed();
		HAL_GPIO_WritePin(GPIOA, LED_Pin, GPIO_PIN_SET);	 // Sáng đèn D1
		HAL_Delay(200);
		HAL_GPIO_WritePin(GPIOB, LEDB9_Pin, GPIO_PIN_SET);	 // Sáng đèn D22
		HAL_Delay(200);
		HAL_GPIO_WritePin(GPIOB, LEDB8_Pin, GPIO_PIN_SET);	 // Sáng đèn D21
		HAL_Delay(200);
		HAL_GPIO_WritePin(GPIOB, LEDB7_Pin, GPIO_PIN_SET);	 // Sáng đèn D20
		HAL_Delay(200);
		HAL_GPIO_WritePin(GPIOB, LEDB6_Pin, GPIO_PIN_SET);	 // Sáng đèn D19
		HAL_Delay(200);
		HAL_GPIO_WritePin(GPIOB, LEDB5_Pin, GPIO_PIN_SET);	 // Sáng đèn D18
		HAL_Delay(200);
		HAL_GPIO_WritePin(GPIOB, LEDB14_Pin, GPIO_PIN_SET);	 // Sáng đèn D17
		HAL_Delay(200);
		HAL_GPIO_WritePin(GPIOB, LEDB13_Pin, GPIO_PIN_SET);	 // Sáng đèn D16
		HAL_Delay(200);
		HAL_GPIO_WritePin(GPIOB, LEDB1_Pin, GPIO_PIN_SET);	 // Sáng đèn D15
		HAL_Delay(200);
		HAL_GPIO_WritePin(GPIOB, LEDB0_Pin, GPIO_PIN_SET);	 // Sáng đèn D14
		HAL_Delay(200);
		HAL_GPIO_WritePin(GPIOA, LEDA12_Pin, GPIO_PIN_SET);	 // Sáng đèn D13
		HAL_Delay(200);
		HAL_GPIO_WritePin(GPIOA, LEDA11_Pin, GPIO_PIN_SET);	 // Sáng đèn D12
		HAL_Delay(200);
		HAL_GPIO_WritePin(GPIOA, LEDA10_Pin, GPIO_PIN_SET);	 // Sáng đèn D11
		HAL_Delay(200);
		HAL_GPIO_WritePin(GPIOA, LEDA9_Pin, GPIO_PIN_SET);	 // Sáng đèn D10
		HAL_Delay(200);
		HAL_GPIO_WritePin(GPIOA, LEDA8_Pin, GPIO_PIN_SET);	 // Sáng đèn D9
		HAL_Delay(200);
		HAL_GPIO_WritePin(GPIOA, LEDA7_Pin, GPIO_PIN_SET);	 // Sáng đèn D8
		HAL_Delay(200);
		HAL_GPIO_WritePin(GPIOA, LEDA6_Pin, GPIO_PIN_SET);	 // Sáng đèn D7
		HAL_Delay(200);
		HAL_GPIO_WritePin(GPIOA, LEDA5_Pin, GPIO_PIN_SET);	 // Sáng đèn D6
		HAL_Delay(200);
		HAL_GPIO_WritePin(GPIOA, LEDA4_Pin, GPIO_PIN_SET);	 // Sáng đèn D5
		HAL_Delay(200);
		HAL_GPIO_WritePin(GPIOA, LEDA3_Pin, GPIO_PIN_SET);	 // Sáng đèn D4
		HAL_Delay(200);
		HAL_GPIO_WritePin(GPIOA, LEDA2_Pin, GPIO_PIN_SET);	 // Sáng đèn D3
		HAL_Delay(200);
		HAL_GPIO_WritePin(GPIOA, LEDA1_Pin, GPIO_PIN_SET);	 // Sáng đèn D2
		HAL_Delay(200);
}

void SangDanXenLe(){
	TatHetLed();
		HAL_GPIO_WritePin(GPIOA, LEDA1_Pin, GPIO_PIN_SET);	 // Sáng đèn D1

		HAL_GPIO_WritePin(GPIOA, LEDA3_Pin, GPIO_PIN_SET);	 // Sáng đèn D3

		HAL_GPIO_WritePin(GPIOA, LEDA5_Pin, GPIO_PIN_SET);	 // Sáng đèn D5

		HAL_GPIO_WritePin(GPIOA, LEDA7_Pin, GPIO_PIN_SET);	 // Sáng đèn D7

		HAL_GPIO_WritePin(GPIOA, LEDA9_Pin, GPIO_PIN_SET);	 // Sáng đèn D9

		HAL_GPIO_WritePin(GPIOA, LEDA11_Pin, GPIO_PIN_SET);	 // Sáng đèn D11

		HAL_GPIO_WritePin(GPIOB, LEDB0_Pin, GPIO_PIN_SET);	 // Sáng đèn D14

		HAL_GPIO_WritePin(GPIOB, LEDB13_Pin, GPIO_PIN_SET);	 // Sáng đèn D16


		HAL_GPIO_WritePin(GPIOB, LEDB5_Pin, GPIO_PIN_SET);	 // Sáng đèn D18

		HAL_GPIO_WritePin(GPIOB, LEDB7_Pin, GPIO_PIN_SET);	 // Sáng đèn D20

		HAL_GPIO_WritePin(GPIOB, LEDB9_Pin, GPIO_PIN_SET);	 // Sáng đèn D22

}

void SangDanXenChan(){
	TatHetLed();

		HAL_GPIO_WritePin(GPIOA, LED_Pin, GPIO_PIN_SET);	 // Sáng đèn D2

		HAL_GPIO_WritePin(GPIOA, LEDA2_Pin, GPIO_PIN_SET);	 // Sáng đèn D4

		HAL_GPIO_WritePin(GPIOA, LEDA4_Pin, GPIO_PIN_SET);	 // Sáng đèn D6

		HAL_GPIO_WritePin(GPIOA, LEDA6_Pin, GPIO_PIN_SET);	 // Sáng đèn D8

		HAL_GPIO_WritePin(GPIOA, LEDA8_Pin, GPIO_PIN_SET);	 // Sáng đèn D10

		HAL_GPIO_WritePin(GPIOA, LEDA10_Pin, GPIO_PIN_SET);	 // Sáng đèn D12

		HAL_GPIO_WritePin(GPIOA, LEDA12_Pin, GPIO_PIN_SET);	 // Sáng đèn D14

		HAL_GPIO_WritePin(GPIOB, LEDB1_Pin, GPIO_PIN_SET);	 // Sáng đèn D15

		HAL_GPIO_WritePin(GPIOB, LEDB14_Pin, GPIO_PIN_SET);	 // Sáng đèn D17

		HAL_GPIO_WritePin(GPIOB, LEDB6_Pin, GPIO_PIN_SET);	 // Sáng đèn D19

		HAL_GPIO_WritePin(GPIOB, LEDB8_Pin, GPIO_PIN_SET);	 // Sáng đèn D21

}

void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV2;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_Pin|LEDA1_Pin|LEDA2_Pin|LEDA3_Pin
                          |LEDA4_Pin|LEDA5_Pin|LEDA6_Pin|LEDA7_Pin
                          |LEDA8_Pin|LEDA9_Pin|LEDA10_Pin|LEDA11_Pin
                          |LEDA12_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LEDB0_Pin|LEDB1_Pin|LEDB13_Pin|LEDB14_Pin
                          |LEDB5_Pin|LEDB6_Pin|LEDB7_Pin|LEDB8_Pin
                          |LEDB9_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_Pin LEDA1_Pin LEDA2_Pin LEDA3_Pin
                           LEDA4_Pin LEDA5_Pin LEDA6_Pin LEDA7_Pin
                           LEDA8_Pin LEDA9_Pin LEDA10_Pin LEDA11_Pin
                           LEDA12_Pin */
  GPIO_InitStruct.Pin = LED_Pin|LEDA1_Pin|LEDA2_Pin|LEDA3_Pin
                          |LEDA4_Pin|LEDA5_Pin|LEDA6_Pin|LEDA7_Pin
                          |LEDA8_Pin|LEDA9_Pin|LEDA10_Pin|LEDA11_Pin
                          |LEDA12_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LEDB0_Pin LEDB1_Pin LEDB13_Pin LEDB14_Pin
                           LEDB5_Pin LEDB6_Pin LEDB7_Pin LEDB8_Pin
                           LEDB9_Pin */
  GPIO_InitStruct.Pin = LEDB0_Pin|LEDB1_Pin|LEDB13_Pin|LEDB14_Pin
                          |LEDB5_Pin|LEDB6_Pin|LEDB7_Pin|LEDB8_Pin
                          |LEDB9_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : BUTTON_Pin */
  GPIO_InitStruct.Pin = BUTTON_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(BUTTON_GPIO_Port, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
