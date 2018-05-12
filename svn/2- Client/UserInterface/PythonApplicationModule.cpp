//Add at the end of the file(BEFORE THE CLOSING }!!!!)
#ifdef ENABLE_ANTI_RESISTANTS
	PyModule_AddIntConstant(poModule, "ENABLE_ANTI_RESISTANTS", 1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_ANTI_RESISTANTS", 0);
#endif