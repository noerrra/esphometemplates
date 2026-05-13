#pragma once

#if defined(USE_ESP32) && defined(USE_ESP_IDF)
  extern "C" {
    #include <esp_private/esp_clk.h>
  }
#endif