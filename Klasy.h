#pragma once

#include <string>
using std::string;

namespace Administracja
{
	class ADRES
	{
	private:
		string ULICA;
		int nr_bud;
		int nr_lok;
		string miejscowosc;
		string kod_pocztowy;
		string poczta;
	public:
		string getULICA()
		{
			return ULICA;
		}
		void setULICA(string ULICA)
		{
			this->ULICA = ULICA;
		}
		int getNr_bud()
		{
			return nr_bud;
		}
		void setNr_bud(int nr_bud)
		{
			this->nr_bud = nr_bud;
		}
		int getNr_lok()
		{
			return nr_lok;
		}
		void setNr_lok(int nr_lok)
		{
			this->nr_lok = nr_lok;
		}
		string getMiejscowosc()
		{
			return miejscowosc;
		}
		void setMiejscowosc(string miejscowosc)
		{
			this->miejscowosc = miejscowosc;
		}
		string getKod_pocztowy()
		{
			return kod_pocztowy;
		}
		void setKod_pocztowy(string kod_pocztowy)
		{
			this->kod_pocztowy = kod_pocztowy;
		}
		string getPoczta()
		{
			return poczta;
		}
		void setPoczta(string poczta)
		{
			this->poczta = poczta;
		}
	};

	class BAZA_CZESCI
	{
	private:
		int ID_CZESCI;
		string NAZWA;
		string FIRMA;
		int CENA;
		char PODATEK;
		int ILOSC_W_MAGAZYNIE;
		int MAX_STAN;
		int MIN_STAN;
		char SEKTOR;
		int SZTUK_NA_SKLADZIE;
	public:
		int getID_CZESCI()
		{
			return ID_CZESCI;
		}
		void setID_CZESCI(int ID_CZESCI)
		{
			this->ID_CZESCI = ID_CZESCI;
		}
		string getNAZWA()
		{
			return NAZWA;
		}
		void setNAZWA(string NAZWA)
		{
			this->NAZWA = NAZWA;
		}
		string getFIRMA()
		{
			return FIRMA;
		}
		void setFIRMA(string FIRMA)
		{
			this->FIRMA = FIRMA;
		}
		int getCENA()
		{
			return CENA;
		}
		void setCENA(int CENA)
		{
			this->CENA = CENA;
		}
		char getPODATEK()
		{
			return PODATEK;
		}
		void setPODATEK(char PODATEK)
		{
			this->PODATEK = PODATEK;
		}
		int getILOSC_W_MAGAZYNIE()
		{
			return ILOSC_W_MAGAZYNIE;
		}
		void setILOSC_W_MAGAZYNIE(int ILOSC_W_MAGAZYNIE)
		{
			this->ILOSC_W_MAGAZYNIE = ILOSC_W_MAGAZYNIE;
		}
		int getMAX_STAN()
		{
			return MAX_STAN;
		}
		void setMAX_STAN(int MAX_STAN)
		{
			this->MAX_STAN = MAX_STAN;
		}
		int getMIN_STAN()
		{
			return MIN_STAN;
		}
		void setMIN_STAN(int MIN_STAN)
		{
			this->MIN_STAN = MIN_STAN;
		}
		char getSEKTOR()
		{
			return SEKTOR;
		}
		void setSEKTOR(char SEKTOR)
		{
			this->SEKTOR = SEKTOR;
		}
		int getSZTUK_NA_SKLADZIE()
		{
			return SZTUK_NA_SKLADZIE;
		}
		void setSZTUK_NA_SKLADZIE(int SZTUK_NA_SKLADZIE)
		{
			this->SZTUK_NA_SKLADZIE = SZTUK_NA_SKLADZIE;
		}
	};

	class FAKTURA
	{
	private:
		int ID_FAKTURY;
		char DATA_DODANIA[8];
		char DATA_FINISH[8];
		bool CZY_ZAPLACONO;
		int CENA;
	public:
		int getID_FAKTURY()
		{
			return ID_FAKTURY;
		}
		void setID_FAKTURY(int ID_FAKTURY)
		{
			this->ID_FAKTURY = ID_FAKTURY;
		}
		void setDATA_DODANIA(char DATA_DODANIA[8])
		{
			for (int i = 0; i < 8; i++)
			{
				this->DATA_DODANIA[i] = DATA_DODANIA[i];
			}
		}
		void setDATA_FINISH(char DATA_FINISH[8])
		{
			for (int i = 0; i < 8; i++)
			{
				this->DATA_FINISH[i] = DATA_FINISH[i];
			}
		}
		bool getCZY_ZAPLACONO()
		{
			return CZY_ZAPLACONO;
		}
		void setCZY_ZAPLACONO(bool CZY_ZAPLACONO)
		{
			this->CZY_ZAPLACONO = CZY_ZAPLACONO;
		}
		int getCENA()
		{
			return CENA;
		}
		void setCENA(int CENA)
		{
			this->CENA = CENA;
		}
	};

	class KATEGORIE_CZESCI
	{
	private:
		int ID_K;
		string NAZWA;
		string OPIS;
	public:
		int getID_K()
		{
			return ID_K;
		}
		void setID_K(int ID_K)
		{
			this->ID_K = ID_K;
		}
		string getNAZWA()
		{
			return NAZWA;
		}
		void setNAZWA(string NAZWA)
		{
			this->NAZWA = NAZWA;
		}
		string getOPIS()
		{
			return OPIS;
		}
		void setOPIS(string OPIS)
		{
			this->OPIS = OPIS;
		}
	};

	class KLIENT
	{
	private:
		string imie;
		string nazwisko;
	public:
		string getImie()
		{
			return imie;
		}
		void setImie(string imie)
		{
			this->imie = imie;
		}
		string getNazwisko()
		{
			return nazwisko;
		}
		void setNazwisko(string nazwisko)
		{
			this->nazwisko = nazwisko;
		}
	};

	class KLIENT_FIRMOWY : Administracja::KLIENT
	{
	private:
		string NAZWA_FIRMY;
		int REGON;
		string NIP;
	public:
		string getNAZWA_FIRMY()
		{
			return NAZWA_FIRMY;
		}
		void setNAZWA_FIRMY(string NAZWA_FIRMY)
		{
			this->NAZWA_FIRMY = NAZWA_FIRMY;
		}
		int getREGON()
		{
			return REGON;
		}
		void setREGON(int REGON)
		{
			this->REGON = REGON;
		}
		string getNIP()
		{
			return NIP;
		}
		void setNIP(string NIP)
		{
			this->NIP = NIP;
		}
	};

	class KLIENT_INDYWIDUALNY : Administracja::KLIENT, Administracja::PRACOWNICY
	{
	private:
		string IMIE;
		string NAZWISKO;
	public:
		string getIMIE()
		{
			return IMIE;
		}
		void setIMIE(string IMIE)
		{
			this->IMIE = IMIE;
		}
		string getNAZWISKO()
		{
			return NAZWISKO;
		}
		void setNAZWISKO(string NAZWISKO)
		{
			this->NAZWISKO = NAZWISKO;
		}
	};

	class ONLINE
	{
	private:
		int ID_ONLINE;
		int ID_PRACOWNIKA;
		char DATA[8];
		char TIME[6];
		bool STAN;
	public:
		int getID_ONLINE()
		{
			return ID_ONLINE;
		}
		void setID_ONLINE(int ID_ONLINE)
		{
			this->ID_ONLINE = ID_ONLINE;
		}
		int getID_PRACOWNIKA()
		{
			return ID_PRACOWNIKA;
		}
		void setID_PRACOWNIKA(int ID_PRACOWNIKA)
		{
			this->ID_PRACOWNIKA = ID_PRACOWNIKA;
		}
		void setDATA(char DATA[8])
		{
			for (int i = 0; i < 8; i++)
			{
				this->DATA[i] = DATA[i];
			}
		}
		void setTIME(char TIME[6])
		{
			for (int i = 0; i < 6; i++)
			{
				this->TIME[i] = TIME[i];
			}
		}
		bool getSTAN()
		{
			return STAN;
		}
		void setSTAN(bool STAN)
		{
			this->STAN = STAN;
		}
	};

	class POJAZDY
	{
	private:
		string MODEL;
		string MARKA;
		int ID_POJAZDU;
	public:
		string getMODEL()
		{
			return MODEL;
		}
		void setMODEL(string MODEL)
		{
			this->MODEL = MODEL;
		}
		string getMARKA()
		{
			return MARKA;
		}
		void setMARKA(string MARKA)
		{
			this->MARKA = MARKA;
		}
		int getID_POJAZDU()
		{
			return ID_POJAZDU;
		}
		void setID_POJAZDU(int ID_POJAZDU)
		{
			this->ID_POJAZDU = ID_POJAZDU;
		}
	};

	class POJAZDY_MORE_INFO
	{
	private:
		int MOC;
		int LICZBA_DRZWI;
		char KOLOR_RGB[3];
		char NR_VIN[15];
	public:
		int getMOC()
		{
			return MOC;
		}
		void setMOC(int MOC)
		{
			this->MOC = MOC;
		}
		int getLICZBA_DRZWI()
		{
			return LICZBA_DRZWI;
		}
		void setLICZBA_DRZWI(int LICZBA_DRZWI)
		{
			this->LICZBA_DRZWI = LICZBA_DRZWI;
		}
		void setKOLOR_RGB(char KOLOR_RGB[3])
		{
			for (int i = 0; i < 3; i++)
			{
				this->KOLOR_RGB[i] = KOLOR_RGB[i];
			}
		}
		void setNR_VIN(char NR_VIN[15])
		{
			for (int i = 0; i < 15; i++)
			{
				this->NR_VIN[i] = NR_VIN[i];
			}
		}
	};

	class PRACOWNICY
	{
	private:
		char ZAWOD;
		int WYNAGRODZENIE;
		bool DYZUR;
		int DNI_WOLNE;
		int ID_PRACOWNIKA;
		string HASLO;
		string LOGIN;
	public:
		char getZAWOD()
		{
			return ZAWOD;
		}
		void setZAWOD(char ZAWOD)
		{
			this->ZAWOD = ZAWOD;
		}
		int getWYNAGRODZENIE()
		{
			return WYNAGRODZENIE;
		}
		void setWYNAGRODZENIE(int WYNAGRODZENIE)
		{
			this->WYNAGRODZENIE = WYNAGRODZENIE;
		}
		bool getDYZUR()
		{
			return DYZUR;
		}
		void setDYZUR(bool DYZUR)
		{
			this->DYZUR = DYZUR;
		}
		int getDNI_WOLNE()
		{
			return DNI_WOLNE;
		}
		void setDNI_WOLNE(int DNI_WOLNE)
		{
			this->DNI_WOLNE = DNI_WOLNE;
		}
		int getID_PRACOWNIKA()
		{
			return ID_PRACOWNIKA;
		}
		void setID_PRACOWNIK(int ID_PRACOWNIKA)
		{
			this->ID_PRACOWNIKA = ID_PRACOWNIKA;
		}
		string getHASLO()
		{
			return HASLO;
		}
		void setHASLO(int HASLO)
		{
			this->HASLO = HASLO;
		}
		string getLOGIN()
		{
			return LOGIN;
		}
		void setLOGIN(string LOGIN)
		{
			this->LOGIN = LOGIN;
		}
	};

	class SCHEMATY
	{
	private:
		int ID_SCHEMATU;
		char SCHEMAT_INFO[256];
	public:
		int getID_SCHEMATU()
		{
			return ID_SCHEMATU;
		}
		void setID_SCHEMATU(int ID_SCHEMATU)
		{
			this->ID_SCHEMATU = ID_SCHEMATU;
		}
		void setSCHEMAT_INFO(char SCHEMAT_INFO[256])
		{
			for (int i = 0; i < 256; i++)
			{
				this->SCHEMAT_INFO[i] = SCHEMAT_INFO[i];
			}
		}
	};

	class TIP
	{
	private:
		int ID_TIP;
		char TIP_ALL[256];
	public:
		int getID_TIP()
		{
			return ID_TIP;
		}
		void setID_TIP(int ID_TIP)
		{
			this->ID_TIP = ID_TIP;
		}
		void setTIP_ALL(char TIP_ALL[256])
		{
			for (int i = 0; i < 256; i++)
			{
				this->TIP_ALL[i] = TIP_ALL[i];
			}
		}
	};

	class ZLECENIE
	{
	private:
		int ID_ZLECENIA;
		char OPIS[256];
		int KOSZT;
		string STAN;
		char DATA_ADD[8];
		char DATA_FINISH[8];
	public:
		int getID_ZLECENIA()
		{
			return ID_ZLECENIA;
		}
		void setID_ZLECENIA(int ID_ZLECENIA)
		{
			this->ID_ZLECENIA = ID_ZLECENIA;
		}
		void setOPIS(char OPIS[256])
		{
			for (int i = 0; i < 256; i++)
			{
				this->OPIS[i] = OPIS[i];
			}
		}
		int getKOSZT()
		{
			return KOSZT;
		}
		void setKOSZT(int KOSZT)
		{
			this->KOSZT = KOSZT;
		}
		string getSTAN()
		{
			return STAN;
		}
		void setSTAN(string STAN)
		{
			this->STAN = STAN;
		}
		void setDATA_ADD(char DATA_ADD[8])
		{
			for (int i = 0; i < 8; i++)
			{
				this->DATA_ADD[i] = DATA_ADD[i];
			}
		}
		void setDATA_FINISH(char DATA_FINISH[8])
		{
			for (int i = 0; i < 8; i++)
			{
				this->DATA_FINISH[i] = DATA_FINISH[i];
			}
		}
	};
}
