#CWE-326 - Inadequate Encryption Strength

KeyGenerator keyGen = KeyGenerator.getInstance("Blowfish");
keyGen.init(64);

KeyPairGenerator keyPairGen = KeyPairGenerator.getInstance("RSA");
keyPairGen.initialize(512);
