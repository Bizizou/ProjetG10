#pragma once

namespace NS_Composants {

	ref class CL_client
	{
	private:
		int ID;
		System::String^ Nom;
		System::String^ Prenom;
		System::String^ Date_naissance;
		System::String^ dateAchat;
		System::String^ Adresse_facturation;
		System::String^ Adresse_livraison;
	public:
		CL_client() {
			//RIEN
		}
		System::String^ AFFICHERbyID(void) {
			return "SELECT * FROM Clients WHERE Numero_client = " + this->getID() + " ";
		}
		System::String^ AFFICHERbyNom(void) {
			return "SELECT * FROM Clients WHERE Nom = '" + this->getNom() + "' ";
		}
		System::String^ AFFICHERbyPrenom(void) {
			return "SELECT * FROM Clients WHERE Prenom = '" + this->getPrenom() + "' ";
		}
		System::String^ SUPPRIMER(void) {
			return "DELETE FROM Clients WHERE Numero_client = " + this->getID() + " ";
		}
		System::String^ AJOUTER(void) {
			return "INSERT INTO Clients (Nom, Prenom, Date_de_naissance, premier_achat, Adresse_de_facturation, Adresse_de_livraison) VALUES('" + this->getNom() + "', '" + this->getPrenom() + "', '" + this->getDate_naissance() + "', '" + this->getdateAchat() + "', '" + this->getAdresse_facturation() + "', '" + this->getAdresse_livraison() + "') ";
		}
		System::String^ MODIFIER(void) {
			return "UPDATE Clients SET Nom = '" + this->getNom() + "', Prenom = '" + this->getPrenom() + "', Date_de_naissance = '" + this->getDate_naissance() + "', premier_achat = '" + this->getdateAchat() + "', Adresse_de_facturation = '" + this->getAdresse_facturation() + "', Adresse_de_livraison = '" + this->getAdresse_livraison() + "' WHERE Numero_client = " + this->getID() + " ";
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
		void setDate_naissance(System::String^ Date_naissance) {
			this->Date_naissance = Date_naissance;
		}
		System::String^ getDate_naissance() {
			return Date_naissance;
		}
		void setdateAchat(System::String^ dateAchat) {
			this->dateAchat = dateAchat;
		}
		System::String^ getdateAchat() {
			return dateAchat;
		}
		void setAdresse_facturation(System::String^ Adresse_facturation) {
			this->Adresse_facturation = Adresse_facturation;
		}
		System::String^ getAdresse_facturation() {
			return Adresse_facturation;
		}
		void setAdresse_livraison(System::String^ Adresse_livraison) {
			this->Adresse_livraison = Adresse_livraison;
		}
		System::String^ getAdresse_livraison() {
			return Adresse_livraison;
		}
	};
}

