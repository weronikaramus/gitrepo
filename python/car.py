#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  car.py

# zdefiunuj klasę Samochod z nast. atrybutami i metodami:
# marka, np. Fiat
# model, np. Tico
# rok produkcji, np 2002
# metoda wiek(), która zwróci wiek samochodu w latach
from datetime import date

from osoba_obj import Osoba

class Kierowca(Osoba):
    
    __licznik = 0 # atrybut klasy, współdzielonny przez obiekty
    
    def __init__(self, imie, nazwisko, kategoria):  # metody obiektu
        super().__init__(imie, nazwisko)
        self.kategoria = kategoria  # atrybuty obiektu
        Kierowca.__licznik += 1
        
    def __del__(self):
        Kierowca.__licznik -= 1

    @staticmethod   # metoda statyczna
    def KierowcaLicz():
        return Kierowca.__licznik

class Samochod:
    
    def __init__(self, marka, model, rok_produkcji):
        self.marka = marka
        self.model = model
        self.rok_produkcji = rok_produkcji

    def wiek(self):
        dzis = date.today()
        return dzis.year - self.rok_produkcji

def main(args):
    # s1 = Samochod('Fiat', 'Tico', 2002)
    # s2 = Samochod('Peugeot', '308', 2007)
    # print(s1.marka, s1.model, s1.wiek())
    # print(s2.marka, s2.model, s2.wiek())
    
    k1 = Kierowca('Adam', 'Słodowy', 'B')
    # print(k1.imie, k1.kategoria)
    print(k1.KierowcaLicz())
    k2 = Kierowca('Ewa', 'Bąk', 'BC')
    print(k1.KierowcaLicz())
    k3 = Kierowca('Bartek', 'Dąb', 'BC')
    print(k1.KierowcaLicz())
    print(k2.KierowcaLicz())
    print(k3.KierowcaLicz())
    
    del(k2)
    del(k3)
    print(k1.KierowcaLicz())
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
