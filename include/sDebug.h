
#if defined(sDEBUG)
#define PRINT(x)                \
    Serial.print(millis());     \
    Serial.print(":");          \
    Serial.print(__FUNCTION__); \
    Serial.print("():");        \
    Serial.print(__LINE__);     \
    Serial.print(" --> ");      \
    Serial.print(#x);           \
    Serial.print(": ");         \
    Serial.println(x);          \
    Serial.println();

#define sDEBUG_BEGIN(x) Serial.begin(x)

#else
#define PRINT(x)
#define sDEBUG_BEGIN(x)
#endif