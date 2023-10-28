#ifndef INVERTERS_H
#define INVERTERS_H

#ifdef SOLAX_CAN
  #include "SOLAX-CAN.h"
#endif

#ifdef CAN_BYD
  #include "BYD-CAN.h"
#endif

#ifdef SMA_CAN
  #include "SMA-CAN.h"
#endif

#ifdef PYLON_CAN
  #include "PYLON-CAN.h"
#endif

#ifdef MODBUS_BYD
  #include "MODBUS-BYD.h"
#endif

#ifdef HUWAWEI_SUN2000
  #include "HUAWEI-SUN2000.h"
#endif

#endif
