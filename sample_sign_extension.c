
// clang unable to detect
void sign_ext()
{
   unsigned long long tmp_data;
   unsigned short opcode_val = 1;
   unsigned short opcode_num= 1;
	tmp_data = opcode_val << 2 * opcode_num;
   
}

/*
Error: SIGN_EXTENSION:
/homes/viditac/clang-sa-new/sample_sign_extension.c:8:
sign_extension: Suspicious implicit sign extension: "opcode_val" with type "unsigned short" (16 bits, unsigned) is promoted in "opcode_val << 2 * opcode_num" to type "int" (32 bits, signed), then sign-extended to type "unsigned long long" (64 bits, unsigned).  If "opcode_val << 2 * opcode_num" is greater than 0x7FFFFFFF, the upper bits of the result will all be 1.

*/
