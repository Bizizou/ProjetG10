#include "Client.h"

Client::Client(System::String^ID,System::String^ Nom, System::String^ Prenom, System::String^ Anniversaire_Client, System::String^ Adresse_de_facturation, System::String^ Adresse_de_livraison, System::String^ premier_achat)
{
    setNom(Nom);
    setPrenom(Prenom);
    setAnniversaire_Client(Anniversaire_Client);
    setAdresse_de_facturation(Adresse_de_facturation);
    setAdresse_de_livraison(Adresse_de_livraison);
    setPremier_achat(premier_achat);
    setID(ID);
}

Client::Client()
{
    
}

System::String^ Client::Afficher()
{
    return "SELECT * FROM Clients WHERE Numero_client='"+getID()+"';";
}

System::String^ Client::Modifier()
{
    return "UPDATE Clients SET Nom = '" + getNom() + "', Prenom = '" + getPrenom() + "', Adresse_de_facturation = '" + getAdresse_de_facturation() + ", Adresse_de_ivraison = '" + getAdresse_de_livraison() + ", Date_de_naissance = '" + getAnniversaire_Client() + "', premier_achat = '" + getPremier_achat() + "'WHERE Numero_client= '" + getID() + "';";
   
}

System::String^ Client::Ajouter()
{
    return "INSERT INTO Clients (Nom,Prenom,Adresse_de_facturation,Adresse_de_livraison,Date_de_naissance,premier_achat) VALUES('" + getNom() + "','" + getPrenom() + "', " + getAdresse_de_facturation() + "', " + getAdresse_de_livraison() + "',"+ getAnniversaire_Client() +"'," + getPremier_achat()+"'); ";
}

System::String^ Client::Supprimer()
{
    return "DELETE from Clients WHERE Numero_client= '" + getID() + "';";
}
System:: String^ Client::getID()
{
    return ID;
}

void Client::setID(System::String^)
{
    this-> ID=ID;
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
