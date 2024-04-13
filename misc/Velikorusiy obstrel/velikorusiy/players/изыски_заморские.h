#define рукоять HANDLE
#define малая_рукоять handle
#define диковинки attributes
#define инструмент device
#define открыть_ставни(инструмент) GetStdHandle(инструмент)
#define покрасить_ставни(малая_рукоять, диковинки) SetConsoleTextAttribute(малая_рукоять, диковинки)
#define Мощная_Рукоять_Руси STD_OUTPUT_HANDLE
...
