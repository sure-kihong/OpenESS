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

     temperature = adc_value * 3300;
        temperature /= 0xfff; //Reading in mV
        temperature /= 1000.0f; //Reading in Volts
        temperature -= 0.76f; // Subtract the reference voltage at 25℃
        temperature /= 0.0025; // Divide by slope 2.5mV
        temperature += 25.0; // Add the 25℃       
}
