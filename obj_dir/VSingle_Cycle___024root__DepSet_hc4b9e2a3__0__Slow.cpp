// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingle_Cycle.h for the primary calling header

#include "verilated.h"

#include "VSingle_Cycle__Syms.h"
#include "VSingle_Cycle__Syms.h"
#include "VSingle_Cycle___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingle_Cycle___024root___dump_triggers__stl(VSingle_Cycle___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VSingle_Cycle___024root___eval_triggers__stl(VSingle_Cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingle_Cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingle_Cycle___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSingle_Cycle___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
