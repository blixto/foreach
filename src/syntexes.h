#define foreach(c,el,L,T) for (c = 0, el = *L; c < sizeof(L)/sizeof(T); el = *(L + ++c))
/*
** c: counter
** el: element
** L: collection array
** T: collection array type
*/