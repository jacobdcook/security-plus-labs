# Section 1: Security Fundamentals

## Key Concepts

### CIA Triad
- **Confidentiality**: Ensuring information is accessible only to authorized users
- **Integrity**: Maintaining data accuracy and consistency
- **Availability**: Ensuring authorized users have access to information when needed

### AAA Framework
- **Authentication**: Verifying user identity
- **Authorization**: Determining user permissions
- **Accounting**: Tracking user actions and resource usage

### Non-repudiation
- Provides proof that a user performed a specific action
- Prevents users from denying their actions
- Essential for legal and compliance requirements

### PKI Basics
- **Public Key Infrastructure**: Framework for managing digital certificates
- **Digital Certificates**: Electronic documents that verify identity
- **Certificate Authority (CA)**: Trusted entity that issues certificates

## Hands-On Lab: Hash Integrity Demo

### Objective
Demonstrate data integrity using SHA-256 hashing to verify file authenticity.

### Prerequisites
- Linux system with `sha256sum` utility
- Text editor (nano, vim, or gedit)

### Lab Steps

1. **Create a test file:**
   ```bash
   echo "This is my secret message for Security+ labs" > secret.txt
   ```

2. **Generate initial hash:**
   ```bash
   sha256sum secret.txt > original_hash.txt
   cat original_hash.txt
   ```

3. **Modify the file:**
   ```bash
   echo "This is my modified secret message" > secret.txt
   ```

4. **Generate new hash:**
   ```bash
   sha256sum secret.txt > modified_hash.txt
   cat modified_hash.txt
   ```

5. **Compare hashes:**
   ```bash
   diff original_hash.txt modified_hash.txt
   ```

### Expected Results
- The hashes will be different, demonstrating that even small changes to data produce completely different hash values
- This proves the integrity of the original data has been compromised

## Screenshot Placeholder

*[Insert terminal screenshot showing the hash comparison results here]*

## Reflection

This lab directly demonstrates the **Integrity** component of the CIA triad. By using cryptographic hashing, we can detect any unauthorized modifications to our data. The SHA-256 algorithm produces a unique fingerprint for each file, making it impossible for an attacker to modify data without detection. This is crucial for maintaining data integrity in security systems, where even minor changes could indicate a security breach or data corruption.

## Key Takeaways

- Hash functions are deterministic (same input always produces same output)
- Even minor changes produce completely different hashes
- Hashing is essential for data integrity verification
- SHA-256 is a cryptographically secure hash function
