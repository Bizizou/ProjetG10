#include "Client.h"

Client::Client(System::String^ Nom, System::String^ Prenom, System::String^ Anniversaire_Client, System::String^ Adresse_de_facturation, System::String^ Adresse_de_livraison, System::String^ premier_achat)
{
    setNom(Nom);
    setPrenom(Prenom);
    setAnniversaire_Client(Anniversaire_Client);
    setAdresse_de_facturation(Adresse_de_facturation);
    setAdresse_de_livraison(Adresse_de_livraison);
    setPremier_achat(premier_achat);
}

Client::Client()
{
    
}

System::String^ Client::Afficher()
{
    return "SELECT * FROM Client_t WHERE Nom = '" + getNom() + "' AND Prenom = '" + getPrenom() + "'";
}

System::String^ Client::Modifier()
{
    return "UPDATE Client_t SET Nom = '" + getNom() + "', Prenom = '" + getPrenom() + "', Adresse_de_Facturation = '" + getAdresse_de_facturation() + ", Adresse_de_Livraison = '" + getAdresse_de_livraison() + ", Anniversaire_Client = '" + getAnniversaire_Client() + "', Premier_achat = '" + getPremier_achat() + "'WHERE Nom = '" + getNom() + "' AND Prenom = '" + getPrenom() + "';";
   
}

System::String^ Client::Ajouter()
{
    return "INSERT INTO Client_t (Nom,Prenom,Adresse_de_Facturation,Adresse_de_Livraison,Anniversaire_Client,Anniversaire_Premier_Achat) VALUES('" + getNom() + "','" + getPrenom() + "', " + getAdresse_de_facturation() + "', " + getAdresse_de_livraison() + "',"+ getAnniversaire_Client() +"'," + getPremier_achat()+"'); ";
}

System::String^ Client::Supprimer()
{
    return "DELETE from Client_t WHERE Nom = '" + getNom() + "' AND Prenom = '" + getPrenom() + "';";
}

System::String^ Client::getNom()
{
    return Nom;
}

void Client::setNom(System::String^)
{
    this->Nom= Nom;
}

System::String^ Client::getPrenom()
{
    return Prenom;
}

void Client::setPrenom(System::String^)
{ 
    this->Prenom = Prenom;
}

System::String^ Client::getAnniversaire_Client()
{
    return Anniversaire_Client;
}

void Client::setAnniversaire_Client(System::String^)
{
    this->Anniversaire_Client =Anniversaire_Client;
}

System::String^ Client::getAdresse_de_facturation()
{
    return Adresse_de_facturation;
}

void Client::setAdresse_de_facturation(System::String^)
{
    this->Adresse_de_facturation = Adresse_de_facturation;
}

System::String^ Client::getAdresse_de_livraison()
{
    return Adresse_de_livraison;
}

void Client::setAdresse_de_livraison(System::String^)
{
    this->Adresse_de_livraison = Adresse_de_livraison;
}

System::String^ Client::getPremier_achat()
{
    return premier_achat;
}

void Client::setPremier_achat(System::String^)
{
    this->premier_achat = premier_achat;
}
