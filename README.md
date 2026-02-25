[Live Demo](https://hybrid-post-quantum-crypto.vercel.app)

# Hybrid Post-Quantum Crypto Library

A C-based implementation of a hybrid cryptographic scheme, combining Elliptic Curve Cryptography (ECC) with NIST-standardized Post-Quantum algorithms (CRYSTALS-Kyber).

## ðŸ›¡ï¸ Overview

This library provides a "safety net" for the transition to quantum-resistant encryption. By using a hybrid approach, the data remains secure as long as at least one of the underlying algorithms (classical or PQC) remains unbroken.

## âœ¨ Features

- **Hybrid Key Encapsulation Mechanism (KEM)**: Combines X25519 with Kyber-768.
- **Quantum-Resistant Digital Signatures**: Supports Dilithium and SPHINCS+.
- **Zero-Knowledge Proofs (ZKP)**: Modular architecture for future proof-of-knowledge integrations.
- **Side-Channel Protection**: Constant-time implementation for critical primitives.

## ðŸ—ï¸ Architecture

The library is structured into modules:
- `include/hybrid/`: Main hybrid API.
- `src/kyber/`: Wrapper around CRYSTALS-Kyber.
- `src/sphincs/`: Wrapper around SPHINCS+.
- `src/zkp/`: Preliminary ZKP modules.

## ðŸ“¦ Building

```bash
mkdir build && cd build
cmake ..
make
```

## ðŸ’» Usage

```c
#include "hybrid/crypto.h"

int main() {
    hpqc_keypair_t kp;
    hpqc_generate_keypair(&kp);
    
    // ... encryption logic ...
    
    return 0;
}
```

## ðŸ“ License

Apache 2.0
