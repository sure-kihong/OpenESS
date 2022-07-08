Int main(void)
while(1)
{

     func1();
     func2();
     func3();
       :
       :
    HAL_ADC_Start(&hadc1);
    while(HAL_ADC_PollForConversion(&hadc1, 1000)!=HAL_OK);
    uint16_t adc_val = HAL_ADC_GetValue(&hadc1);
    float vref = (float)(1.21 * 4095) / adc_val;
        
}
