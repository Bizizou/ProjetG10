#include "Personnel.h"

Personnel::Personnel(System::String^ Nom, System::String^ Prenom, System::String^ Adresse, System::String^ Date)
{  
    setNom(Nom);
    setPrenom(Prenom);
    setAdresse(Adresse);
    setDate(Date);
    
}

Personnel::Personnel() 
{

}

System::String^ Personnel::Afficher()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

System::String^ Personnel::Modifier()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

System::String^ Personnel::Ajouter()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

System::String^ Personnel::Supprimer()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

System::String^ Personnel::getNom()
{
    return Nom;
}

void Personnel::setNom(System::String^)
{
    this->Nom = Nom;
}

System::String^ Personnel::getPrenom()
{
    return Nom;
}

void Personnel::setPrenom(System::String^)
{
    this->Prenom = Prenom;
}

System::String^ Personnel::getAdresse()
{
    return Adresse;
}

void Personnel::setAdresse(System::String^)
{
    this->Adresse = Adresse;
}

System::String^ Personnel::getDate()
{
    return Date;
}

void Personnel::setDate(System::String^)
{
    this->Date = Date;
}
