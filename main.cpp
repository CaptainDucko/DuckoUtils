#include <iostream>
#include "ducko.h"
template<typename First, typename... Strings>
void classless_print(First arg, const Strings &... rest) {
    std::cout << arg;
    classless_print(rest...);
}

void classless_print() {
    std::cout<<std::endl;
}

int main() {
    classless_print("Hello, World!","now for more stuff","huzzah!"); //--prints to console--> Hello, World!now for more stuff
    ducko::d_print("trying to ", "encapsulate"); //--throws error--> LINK Pass 1: command "C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\duckoUtilities.dir\objects1.rsp /out:duckoUtilities.exe /implib:duckoUtilities.lib /pdb:C:\Users\jules\CLionProjects\duckoUtilities\cmake-build-debug\duckoUtilities.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib /MANIFEST /MANIFESTFILE:CMakeFiles\duckoUtilities.dir/intermediate.manifest CMakeFiles\duckoUtilities.dir/manifest.res" failed (exit code 1120) with the following output:
    // main.cpp.obj : error LNK2019: unresolved external symbol "public: static void __cdecl ducko::d_print<char const *,char [12]>(char const *,char const (&)[12])" (??$d_print@PBD$$BY0M@D@ducko@@SAXPBDAAY0M@$$CBD@Z) referenced in function _main
    // duckoUtilities.exe : fatal error LNK1120: 1 unresolved externals
    return 0;
}