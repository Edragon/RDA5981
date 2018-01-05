#if !defined(MBEDTLS_ENTROPY_HARDWARE_ALT) && !defined(MBEDTLS_ENTROPY_NV_SEED)

#ifdef MBEDTLS_TEST_NULL_ENTROPY
#warning "MBED TLS SECURITY FEATURE IS DISABLED. THE TESTS WILL NOT BE SECURE! PLEASE IMPLEMENT HARDWARE ENTROPY FOR YOUR SELECTED HARDWARE."

#else
#warning "THIS HARDWARE DOES NOT HAVE ENTROPY. DISABLING MBED TLS SECURITY FEATURE."
#define MBEDTLS_NO_DEFAULT_ENTROPY_SOURCES
#define MBEDTLS_TEST_NULL_ENTROPY
#warning "MBED TLS SECURITY FEATURE IS DISABLED. THE TESTS WILL NOT BE SECURE! PLEASE IMPLEMENT HARDWARE ENTROPY FOR YOUR SELECTED HARDWARE."
#endif // defined(MBEDTLS_TEST_NULL_ENTROPY)

#endif // !defined(MBEDTLS_ENTROPY_HARDWARE_ALT) && !defined(MBEDTLS_ENTROPY_NV_SEED)
