/* This is an Scheme48/C interface file, 
** automatically generated by a hacked version of cig 3.0.
step 4
*/

#include <stdio.h>
#include <stdlib.h> /* For malloc. */
#include "libcig.h"

s48_value df_strlen_or_false(s48_value g1)
{
    extern s48_value strlen_or_false(const char * );
    s48_value ret1 = S48_FALSE;
    S48_DECLARE_GC_PROTECT(1);
    s48_value r1;

    
    
    S48_GC_PROTECT_1(ret1);
    r1 = strlen_or_false((const char * )AlienVal(g1));
    ret1 = r1;
    S48_GC_UNPROTECT();
    return ret1;
}

s48_value df_cstring_nullp(s48_value g1)
{
    extern int cstring_nullp(const char * );
    s48_value ret1 = S48_FALSE;
    S48_DECLARE_GC_PROTECT(1);
    int r1;

    
    
    S48_GC_PROTECT_1(ret1);
    r1 = cstring_nullp((const char * )AlienVal(g1));
    ret1 = ENTER_BOOLEAN(r1);
    S48_GC_UNPROTECT();
    return ret1;
}

s48_value df_c2scheme_strcpy_free(s48_value g1, s48_value g2)
{
    extern int c2scheme_strcpy_free(s48_value , char* );
    s48_value ret1 = S48_FALSE;
    S48_DECLARE_GC_PROTECT(1);
    int r1;

    
    
    S48_GC_PROTECT_1(ret1);
    r1 = c2scheme_strcpy_free(g1, (char* )AlienVal(g2));
    ret1 = ENTER_BOOLEAN(r1);
    S48_GC_UNPROTECT();
    return ret1;
}

s48_value df_c2scheme_strcpy(s48_value g1, s48_value g2)
{
    extern int c2scheme_strcpy(s48_value , char* );
    s48_value ret1 = S48_FALSE;
    S48_DECLARE_GC_PROTECT(1);
    int r1;

    
    
    S48_GC_PROTECT_1(ret1);
    r1 = c2scheme_strcpy(g1, (char* )AlienVal(g2));
    ret1 = ENTER_BOOLEAN(r1);
    S48_GC_UNPROTECT();
    return ret1;
}

s48_value df_c_veclen(s48_value g1)
{
    extern s48_value c_veclen(long* );
    s48_value ret1 = S48_FALSE;
    S48_DECLARE_GC_PROTECT(1);
    s48_value r1;

    
    
    S48_GC_PROTECT_1(ret1);
    r1 = c_veclen((long* )AlienVal(g1));
    ret1 = r1;
    S48_GC_UNPROTECT();
    return ret1;
}

s48_value df_free(s48_value g1)
{
    

    
    free((void* )AlienVal(g1));
    return S48_FALSE;
}

s48_value df_set_strvec_carriers(s48_value g1, s48_value g2)
{
    extern void set_strvec_carriers(s48_value , char** );

    
    set_strvec_carriers(g1, (char** )AlienVal(g2));
    return S48_FALSE;
}

void s48_init_cig(void)
{
    S48_EXPORT_FUNCTION(df_strlen_or_false);
    S48_EXPORT_FUNCTION(df_cstring_nullp);
    S48_EXPORT_FUNCTION(df_c2scheme_strcpy_free);
    S48_EXPORT_FUNCTION(df_c2scheme_strcpy);
    S48_EXPORT_FUNCTION(df_c_veclen);
    S48_EXPORT_FUNCTION(df_free);
    S48_EXPORT_FUNCTION(df_set_strvec_carriers);
}
