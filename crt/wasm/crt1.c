#include <wasm/wasm_init_data.h>

extern void __init_libc(char **envp, char *pn);

// Perform libc initialisation at the highest priority
__attribute__((constructor(1)))
void __libc_ctor()
{
	__init_libc((char**)&__wasm_init_data.envp0, (char*)__wasm_init_data.argv0);
}
