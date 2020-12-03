#pragma once


ref class Personnel
{
private:
	System::String^ Nom;
	System::String^ Prenom;
	System::String^ Adresse;
	System::String^ Date;
	

public:
	Personnel(System::String^, System::String^, System::String^, System::String^);
	Personnel();
	System::String^ Afficher();
	System::String^ Modifier();
	System::String^ Ajouter();
	System::String^ Supprimer();
	System::String^ getNom();
	void setNom(System::String^);
	System::String^ getPrenom();
	void setPrenom(System::String^);
	System::String^ getAdresse();
	void setAdresse(System::String^);
	System::String^ getDate();
	void setDate(System::String^);
	


};
