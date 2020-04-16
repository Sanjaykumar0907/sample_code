#make file - this is a comment section


all:
	$(CC) -c \
		sample_use_after_free.c \
		sample_use_after.c \
		sample_memory_leak.c \
		sample_forward_null.c \
		tainted_scalar.c \
		tainted_string.c \
		sample_file_handle.c \
		sample_bad_sizeof.c \
		sample_bad_compare.c \
		sample_constant_expr.c \
		sample_uninit.c \
		sample_overrun_in_for_loop.c \
		sample_overrun.c \
		sample_strcpy_string_overflow.c \
		array_vs_singleton.c \
		sample_sizeof_mismatch.c \
		sample_uninit_ctor_base.cpp \
		sample_uninit_ctor_derived.cpp \
		sample_integer_overflow.c \
		sample_return_local.c \
		sample_constant_expr_1.c \
		sample_custom_string_checkers.c \
		sample_getwd.c \
		sample_wsclen.c \
		sample_wsccpy.c \
		sample_vsprintf.c \
		sample_string_size.c \
		sample_string_null.c \
		sample_buffer_size_warning.c \
		sample_sign_extension.c	\
		sample_uninit_ctor_derived3.cpp \
		sample_bad_free.c \
		sample_forward_null.cpp \
	        sample_strdup.c \
		sample_overrun_buffer_klock.c \
		sample_use_after_free_klock.c \
		sample_forward_null_klock.c \
		sample_constant_expr_new.c \
		sample_fnptr.c
		
clean:
	rm -rf *.o
