// Created by Aubrey on 4/25/2024

#ifndef NIFTYDSC_COMPILE_CONDITIONS_H
#define NIFTYDSC_COMPILE_CONDITIONS_H

// Options:
// Change to 0 to disable serial debug statements:
#define SERIAL_DEBUG 1
// ----------------------------------------------------------------

#define DEBUG_VARARGS(...) __VA_ARGS__
#if SERIAL_DEBUG == 1

    #define debug(x) Serial.print(x)
    #define debugln(x) Serial.println(x)
    #define debugf(...) Serial.printf(DEBUG_VARARGS(__VA_ARGS__))

#else

    #define debug(x)
    #define debugln(x)
    #define debugf(...)

#endif  // SERIAL_DEBUG

#endif  // NIFTYDSC_COMPILE_CONDITIONS_H