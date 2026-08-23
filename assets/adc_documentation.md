# ADC Peripheral – STM32F401CC

## Key Registers
- **ADC_CR2 (offset 0x08)**  
  - Bit 0 ADON: ADC enable  
  - Bit 1 CONT: Continuous conversion  
  - Bit 30 SWSTART: Start conversion  

- **ADC_SR (offset 0x00)**  
  - Bit 1 EOC: End of conversion flag  

- **ADC_DR (offset 0x4C)**  
  - Holds the 16‑bit conversion result  

- **ADC_CCR (offset 0x300)**  
  - Prescaler setting  
  - TSVREFE: Temperature sensor enable  
  - VBATE: Battery voltage enable  

## Driver Summary
- `ADC_Init()` powers on ADC1, sets prescaler, enables continuous mode, and starts conversion.  
- `ADC_Read()` waits for EOC flag and returns the conversion result.  
