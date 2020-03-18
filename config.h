#pragma once

#include <usart.h>
#include <iopins.h>

using namespace Mcucpp;
using namespace Mcucpp::IO;
using namespace Mcucpp::Clock;

#if defined(STM32F40_41xxx)

typedef Usart1 BootDevice;
typedef Usart1Clock BootDeviceClock;

typedef Pb6 TxPin;
typedef Pb7 RxPin;
typedef NullPin DePin;
typedef Pd13 Led;
#define MCU_NAME {'S', 'T', 'M', '3', '2', 'F', '4', '0', '7'}

#elif defined(stm32l471)

typedef Usart3 BootDevice;
typedef Usart3Clock BootDeviceClock;

typedef Pc4 TxPin;
typedef Pc5 RxPin;
typedef Pb14 DePin;//Pb1 DePin;
typedef Pb7 Led;
#define MCU_NAME {'S', 'T', 'M', '3', '2', 'L', '4', '7', '1'}

#endif
constexpr uint8_t BootModbusAddr = 1;

constexpr uint16_t PageBufferSize = 2048;
constexpr uint16_t PageBufferAddr = 1024;
constexpr uint16_t PageMapAddr = 1024;
constexpr uint16_t CommandAddress = 100;
constexpr uint16_t CommandParamsSize = 100;


constexpr uint16_t BootVersion = 1;
constexpr uint32_t EntryPointMarker1 = 0xA5A5A5A5;
constexpr uint32_t EntryPointMarker2 = 0x5A5A5A5A;

constexpr uint32_t BootStartTimeout = 2 * 1000;

