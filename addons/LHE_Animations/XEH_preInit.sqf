#include "\a3\ui_f\hpp\defineDIKCodes.inc"

["Brotherhood Aux", "vertical bar", ["Salute", "Brotherhood of Steel Salute Keybind"], {
    player playAction "GestureBOSSalute";
}, [DIK_TAB, [false, false, false]]] call CBA_fnc_addKeybind;