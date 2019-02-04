#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kalkulator.py


def pokaz_liste():
    print('''Lista działań:
          +  – dodawanie
          -  – odejmowanie
          *  – mnożenie
          /  – dzielenie
          // – dzielenie całkowite
          %  – dzielenie modulo
          ^  – potęgowanie
          !  – silnia
          sin – sinus
          cos – cosinus
          koniec – wyjście z programu
          ''')

def dziel(a, b):
    if b != 0:
        return a / b
    else:
        print('Błąd dzielenia przez zero!')
    return 0
          
def pobierz_liczbe(komunikat='Pobierz liczbę: '):
    a = input(komunikat)
    if a.isdigit():
        return int(a)
    return False

def main(args):
    pokaz_liste()
    while True:
        d = input("Wybierz działanie")
        if d == '+':
            pass
        elif d == '-':
            pass
        elif d == '*':
            pass
        elif d == '/':
            a = pobierz_liczbe('Podaj dzielną:')
            b = pobierz_liczbe('Podaj dzielnik:')
            if a and b:
                wynik = dziel(a, b)
                if wynik:
                    print('{} / {} = {}' .format(a, b, wynik))
                    
        elif d == '//':
            pass
        elif d == 'l':
            pokaz_liste()
        elif d == 'koniec':
            return 0
        else:
            print("")
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
