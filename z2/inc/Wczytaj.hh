#ifndef WCZYTAJ_HH
#define WCZYTAJ_HH

struct IStream{
  FILE ∗pCStrm;
  bool Fail;
  };
void Clear(IStream &str)
{
    str.Fail = false;
}
  pool get(std::istream &str, LZespolona &L1)
  pool get(WyrazenieZesp &WyrZ);
#endif