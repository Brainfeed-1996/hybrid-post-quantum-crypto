#ifndef HPQC_CRYPTO_H
#define HPQC_CRYPTO_H

#include <stddef.h>
#include <stdint.h>

/**
 * @brief Hybrid Post-Quantum Crypto Library
 * 
 * Implements a hybrid approach combining classical RSA/ECC with 
 * post-quantum algorithms like CRYSTALS-Kyber.
 */

#define HPQC_SUCCESS 0
#define HPQC_ERROR_GENERIC -1
#define HPQC_ERROR_AUTH -2

typedef struct {
    uint8_t* public_key;
    size_t pub_len;
    uint8_t* secret_key;
    size_t sec_len;
} hpqc_keypair_t;

int hpqc_generate_keypair(hpqc_keypair_t* kp);
int hpqc_encrypt(const uint8_t* plaintext, size_t pt_len, const uint8_t* pub_key, uint8_t** ciphertext, size_t* ct_len);
int hpqc_decrypt(const uint8_t* ciphertext, size_t ct_len, const uint8_t* sec_key, uint8_t** plaintext, size_t* pt_len);

#endif // HPQC_CRYPTO_H
