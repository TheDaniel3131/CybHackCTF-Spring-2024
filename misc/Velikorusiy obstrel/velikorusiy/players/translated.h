#define HANDLE
#define small_handle handle
#define curiosities attributes
#define tool device
#define open_shutters(tool) GetStdHandle(tool)
#define paint_shutters(small_handle, curiosities) SetConsoleTextAttribute(small_handle, curiosities)
#define Powerful_Handle_Rus STD_OUTPUT_HANDLE
...