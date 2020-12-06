#pragma once

namespace NS_Composants {

	ref class Personnel
	{
	private:
		int ID;
		System::String^ Nom;
		System::String^ Prenom;
		System::String^ adresse;
		System::String^ dateembauche;
		System::String^ nom_encadreur;
		System::String^ prenom_encadreur;

	public:
		Personnel() {
			//RIEN
		}
		System::String^ AFFICHERbyID(void) {
			return "SELECT * FROM Le_personnel WHERE ID = " + this->getID() + " ";
		}
		System::String^ AJOUTER(void) {
			return "INSERT INTO Le_personnel (Nom, Prenom, Adresse, Date_d_embauche) VALUES('" + this->getNom() + "', '" + this->getPrenom() + "', '" + this->getadresse() + "', '" + this->getdateembauche() + "') ";
		}
		System::String^ AJOUTER_ENCADREUR(void) {
			return "UPDATE Le_personnel SET ID_Le_personnel = (SELECT ID FROM Le_personnel WHERE Nom = '" + getnom_encadreur() + "' AND Prenom = '" + getprenom_encadreur() + "' ) WHERE Nom = '"+getNom()+"' AND Prenom = '"+getPrenom()+"' ";
			//return "INSERT INTO Le_personnel (Nom, Prenom, Adresse, Date_d_embauche, ID_Le_personnel) VALUES('" + this->getNom() + "', '" + this->getPrenom() + "', '" + this->getadresse() + "', '" + this->getdateembauche() + "',(SELECT ID FROM Le_personnel WHERE Nom='" + this->getnom_encadreur() + "' AND Prenom='" + this->getprenom_encadreur() + "')) ";
		}
		System::String^ MODIFIER(void) {
			return "UPDATE Le_personnel SET Nom = '" + this->getNom() + "', Prenom = '" + this->getPrenom() + "', Adresse = '" + this->getadresse() + "' , Date_d_embauche =  '" + this->getdateembauche() + "', ID_Le_personnel = (SELECT ID FROM Le_personnel WHERE Nom = '"+getnom_encadreur()+"' AND Prenom = '"+getprenom_encadreur()+"' ) WHERE ID = " + this->getID() + " ";
		}
		System::String^ SUPPRIMER(void) {

			return "UPDATE Le_personnel SET ID_Le_personnel = NULL WHERE ID_Le_personnel = " + getID() + " DELETE FROM Le_personnel WHERE ID = " + getID() + " ";
			
		}
		void setID(int sID) {
			this->ID = sID;
		}
		int getID() {
			return ID;
		}
		void setNom(System::String^ Nom) {
			this->Nom = Nom;
		}
		System::String^ getNom() {
			return Nom;
		}
		void setPrenom(System::String^ Prenom) {
			this->Prenom = Prenom;
		}
		System::String^ getPrenom() {
			return Prenom;
		}
	
		void setadresse(System::String^ adresse) {
			this->adresse = adresse;
		}
		System::String^ getadresse() {
			return adresse;
		}
		void setdateembauche(System::String^ dateembauche) {
			this->dateembauche = dateembauche;
		}
		System::String^ getdateembauche() {
			return dateembauche;
		}
		void setnom_encadreur(System::String^ nom_encadreur) {
			this->nom_encadreur = nom_encadreur;
		}
		System::String^ getnom_encadreur() {
			return nom_encadreur;
		}
		void setprenom_encadreur(System::String^ prenom_encadreur) {
			this->prenom_encadreur = prenom_encadreur;
		}
		System::String^ getprenom_encadreur() {
			return prenom_encadreur;
		}
	};
}

