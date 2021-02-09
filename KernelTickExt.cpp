#include "KernelTickExt.h"


nBlock_KernelTickExt::nBlock_KernelTickExt(PinName ext_pin) {
     KernelTickSource(KERNEL_TICK_EXT, ext_pin);
}
