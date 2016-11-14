all : binary_search_spec.exe binary_search_app.exe

binary_search_spec.exe : binary_search_spec.cpp binary_search.h binary_search.cpp
	cl /EHsc binary_search_spec.cpp binary_search.cpp

binary_search_app.exe : binary_search_app.cpp binary_search.h binary_search.cpp
	cl /EHsc binary_search_app.cpp binary_search.cpp
