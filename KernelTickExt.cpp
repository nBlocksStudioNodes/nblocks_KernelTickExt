#include "KernelTickExt.h"


nBlock_KernelTickExt::nBlock_KernelTickExt(float period) {
    KernelTickExt(period);
    KernelTickSource(KERNEL_TICK_TIMER, NC);
}
