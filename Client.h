#pragma once


ref class Client
{
private:
	System::String^ Nom;
	System::String^ Prenom;
	System::String^ Anniversaire_Client;
	System::String^ Adresse_de_facturation;
	System::String^ Adresse_de_livraison;
	System::String^ premier_achat;
	System::String^ ID;

public:
	Client(System::String^,System::String^, System::String^,System::String^,System::String^,System::String^,System::String^);
	Client();
	System::String^ Afficher();
	System::String^ Modifier();
	System::String^ Ajouter();
	System::String^ Supprimer();
	System::String^ getNom();
	void setID(System::String^);
	System::String^ getID();
	void setNom(System::String^);
	System::String^ getPrenom();
	void setPrenom(System::String^);
	System::String^ getAnniversaire_Client();
	void setAnniversaire_Client(System::String^);
	System::String^ getAdresse_de_facturation();
	void setAdresse_de_facturation(System::String^);
	System::String^ getAdresse_de_livraison();
	void setAdresse_de_livraison(System::String^);
	System::String^ getPremier_achat();
	void setPremier_achat(System::String^);


};

