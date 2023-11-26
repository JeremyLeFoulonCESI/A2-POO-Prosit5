#include "pch.h"
#include "MyForm.h"


namespace testWin {

	using namespace System;

	using namespace System::ComponentModel;

	using namespace System::Collections;

	using namespace System::Windows::Forms;

	using namespace System::Data;

	using namespace System::Drawing;

	using namespace System::IO;

	MyForm::MyForm(void) {
		InitializeComponent();
		// 
		//TODO: ajoutez ici le code du constructeur 
		// 
	}

	void MyForm::InitializeComponent(void)

	{

		this->btn_first = (gcnew Button());
		this->btn_previous = (gcnew Button());
		this->btn_next = (gcnew Button());
		this->btn_last = (gcnew Button());
		this->pctBx = (gcnew PictureBox());
		this->lbl_vision = (gcnew Label());
		this->btn_source = (gcnew Button());
		this->btn_destination = (gcnew Button());
		this->txt_source = (gcnew TextBox());
		this->txt_destination = (gcnew TextBox());
		this->gpBox_typeProcessus = (gcnew GroupBox());
		this->rdb_effacer = (gcnew RadioButton());
		this->rdb_coiperEffacer = (gcnew RadioButton());
		this->rdb_copier = (gcnew RadioButton());
		this->btn_proceder = (gcnew Button());
		this->txt_rslt = (gcnew TextBox());
		this->lbl_resultats = (gcnew Label());
		this->fld_source = (gcnew FolderBrowserDialog());
		this->fld_destination = (gcnew FolderBrowserDialog());
		(cli::safe_cast<ISupportInitialize^>(this->pctBx))->BeginInit();
		this->gpBox_typeProcessus->SuspendLayout();
		this->SuspendLayout();


		this->btn_first->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, FontStyle::Bold, GraphicsUnit::Point,
			static_cast<Byte>(0)));
		this->btn_first->Location = Point(10, 337);
		this->btn_first->Name = L"btn_first";
		this->btn_first->Size = System::Drawing::Size(75, 23);
		this->btn_first->TabIndex = 0;
		this->btn_first->Text = L"<<";
		this->btn_first->UseVisualStyleBackColor = true;


		this->btn_previous->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, FontStyle::Bold, GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->btn_previous->Location = Point(91, 337);
		this->btn_previous->Name = L"btn_previous";
		this->btn_previous->Size = System::Drawing::Size(75, 23);
		this->btn_previous->TabIndex = 1;
		this->btn_previous->Text = L"<";
		this->btn_previous->UseVisualStyleBackColor = true;
		this->btn_previous->Click += gcnew EventHandler(this, &MyForm::btn_previous_Click);


		this->btn_next->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, FontStyle::Bold, GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->btn_next->Location = Point(172, 337);
		this->btn_next->Name = L"btn_next";
		this->btn_next->Size = System::Drawing::Size(75, 23);
		this->btn_next->TabIndex = 2;
		this->btn_next->Text = L">";
		this->btn_next->UseVisualStyleBackColor = true;
		this->btn_next->Click += gcnew EventHandler(this, &MyForm::btn_next_Click);


		this->btn_last->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, FontStyle::Bold, GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->btn_last->Location = Point(253, 337);
		this->btn_last->Name = L"btn_last";
		this->btn_last->Size = System::Drawing::Size(75, 23);
		this->btn_last->TabIndex = 3;
		this->btn_last->Text = L">>";
		this->btn_last->UseVisualStyleBackColor = true;
		this->btn_last->Click += gcnew EventHandler(this, &MyForm::btn_last_Click);
		

		this->pctBx->BorderStyle = BorderStyle::FixedSingle;
		this->pctBx->Location = Point(10, 27);
		this->pctBx->Name = L"pctBx";
		this->pctBx->Size = System::Drawing::Size(317, 302);
		this->pctBx->SizeMode = PictureBoxSizeMode::StretchImage;
		this->pctBx->TabIndex = 4;
		this->pctBx->TabStop = false;


		this->lbl_vision->AutoSize = true;
		this->lbl_vision->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, FontStyle::Bold, GraphicsUnit::Point,
			static_cast<Byte>(0)));
		this->lbl_vision->Location = Point(10, 8);
		this->lbl_vision->Name = L"lbl_vision";
		this->lbl_vision->Size = System::Drawing::Size(69, 13);
		this->lbl_vision->TabIndex = 5;
		this->lbl_vision->Text = L"Visionnage";


		this->btn_source->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, FontStyle::Italic, GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->btn_source->Location = Point(333, 27);
		this->btn_source->Name = L"btn_source";
		this->btn_source->Size = System::Drawing::Size(110, 20);
		this->btn_source->TabIndex = 6;
		this->btn_source->Text = L"Source";
		this->btn_source->UseVisualStyleBackColor = true;
		this->btn_source->Click += gcnew EventHandler(this, &MyForm::btn_source_Click);


		this->btn_destination->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, FontStyle::Italic, GraphicsUnit::Point,
			static_cast<Byte>(0)));
		this->btn_destination->Location = Point(333, 53);
		this->btn_destination->Name = L"btn_destination";
		this->btn_destination->Size = System::Drawing::Size(110, 20);
		this->btn_destination->TabIndex = 7;
		this->btn_destination->Text = L"Destination";
		this->btn_destination->UseVisualStyleBackColor = true;
		this->btn_destination->Click += gcnew EventHandler(this, &MyForm::btn_destination_Click);


		this->txt_source->Location = Point(449, 27);
		this->txt_source->Name = L"txt_source";
		this->txt_source->ReadOnly = true;
		this->txt_source->Size = System::Drawing::Size(307, 20);
		this->txt_source->TabIndex = 8;


		this->txt_destination->Location = System::Drawing::Point(449, 53);

		this->txt_destination->Name = L"txt_destination";

		this->txt_destination->ReadOnly = true;

		this->txt_destination->Size = System::Drawing::Size(307, 20);

		this->txt_destination->TabIndex = 9;

		//  

		// gpBox_typeProcessus 

		//  

		this->gpBox_typeProcessus->Controls->Add(this->rdb_effacer);

		this->gpBox_typeProcessus->Controls->Add(this->rdb_coiperEffacer);

		this->gpBox_typeProcessus->Controls->Add(this->rdb_copier);

		this->gpBox_typeProcessus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,

			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));

		this->gpBox_typeProcessus->Location = System::Drawing::Point(336, 88);

		this->gpBox_typeProcessus->Name = L"gpBox_typeProcessus";

		this->gpBox_typeProcessus->Size = System::Drawing::Size(419, 44);

		this->gpBox_typeProcessus->TabIndex = 10;

		this->gpBox_typeProcessus->TabStop = false;

		this->gpBox_typeProcessus->Text = L"Type de processus";

		//  

		// rdb_effacer 

		//  

		this->rdb_effacer->AutoSize = true;

		this->rdb_effacer->Location = System::Drawing::Point(357, 19);

		this->rdb_effacer->Name = L"rdb_effacer";

		this->rdb_effacer->Size = System::Drawing::Size(66, 17);

		this->rdb_effacer->TabIndex = 2;

		this->rdb_effacer->TabStop = true;

		this->rdb_effacer->Text = L"Effacer";

		this->rdb_effacer->UseVisualStyleBackColor = true;

		//  

		// rdb_coiperEffacer 

		//  

		this->rdb_coiperEffacer->AutoSize = true;

		this->rdb_coiperEffacer->Location = System::Drawing::Point(204, 19);

		this->rdb_coiperEffacer->Name = L"rdb_coiperEffacer";

		this->rdb_coiperEffacer->Size = System::Drawing::Size(120, 17);

		this->rdb_coiperEffacer->TabIndex = 1;

		this->rdb_coiperEffacer->TabStop = true;

		this->rdb_coiperEffacer->Text = L"Copier et effacer";

		this->rdb_coiperEffacer->UseVisualStyleBackColor = true;

		//  

		// rdb_copier 

		//  

		this->rdb_copier->AutoSize = true;

		this->rdb_copier->Location = System::Drawing::Point(113, 19);

		this->rdb_copier->Name = L"rdb_copier";

		this->rdb_copier->Size = System::Drawing::Size(61, 17);

		this->rdb_copier->TabIndex = 0;

		this->rdb_copier->TabStop = true;

		this->rdb_copier->Text = L"Copier";

		this->rdb_copier->UseVisualStyleBackColor = true;

		//  

		// btn_proceder 

		//  

		this->btn_proceder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,

			static_cast<System::Byte>(0)));

		this->btn_proceder->ForeColor = System::Drawing::Color::Blue;

		this->btn_proceder->Location = System::Drawing::Point(336, 141);

		this->btn_proceder->Name = L"btn_proceder";

		this->btn_proceder->Size = System::Drawing::Size(420, 61);

		this->btn_proceder->TabIndex = 11;

		this->btn_proceder->Text = L"Procéder";

		this->btn_proceder->UseVisualStyleBackColor = true;

		this->btn_proceder->Click += gcnew System::EventHandler(this, &MyForm::btn_proceder_Click);

		//  

		// txt_rslt 

		//  

		this->txt_rslt->Location = System::Drawing::Point(337, 227);

		this->txt_rslt->Multiline = true;

		this->txt_rslt->Name = L"txt_rslt";

		this->txt_rslt->ReadOnly = true;

		this->txt_rslt->Size = System::Drawing::Size(419, 133);

		this->txt_rslt->TabIndex = 12;

		//  

		// lbl_resultats 

		//  

		this->lbl_resultats->AutoSize = true;

		this->lbl_resultats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,

			static_cast<System::Byte>(0)));

		this->lbl_resultats->Location = System::Drawing::Point(334, 211);

		this->lbl_resultats->Name = L"lbl_resultats";

		this->lbl_resultats->Size = System::Drawing::Size(60, 13);

		this->lbl_resultats->TabIndex = 13;

		this->lbl_resultats->Text = L"Résultats";

		//  

		// MyForm 

		//  

		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);

		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;

		this->ClientSize = System::Drawing::Size(766, 373);

		this->Controls->Add(this->lbl_resultats);

		this->Controls->Add(this->txt_rslt);

		this->Controls->Add(this->btn_proceder);

		this->Controls->Add(this->gpBox_typeProcessus);

		this->Controls->Add(this->txt_destination);

		this->Controls->Add(this->txt_source);

		this->Controls->Add(this->btn_destination);

		this->Controls->Add(this->btn_source);

		this->Controls->Add(this->lbl_vision);

		this->Controls->Add(this->pctBx);

		this->Controls->Add(this->btn_last);

		this->Controls->Add(this->btn_next);

		this->Controls->Add(this->btn_previous);

		this->Controls->Add(this->btn_first);

		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;

		this->MaximizeBox = false;

		this->Name = L"MyForm";

		this->Text = L"[EI] [A2 MININF] Bloc Programmation orientée objet- Prosit 5";

		this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);

		this->Closed += gcnew EventHandler(this, &MyForm::MyForm_exit);

		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctBx))->EndInit();

		this->gpBox_typeProcessus->ResumeLayout(false);

		this->gpBox_typeProcessus->PerformLayout();

		this->ResumeLayout(false);

		this->PerformLayout();
	}

	void MyForm::MyForm_Load(Object^ sender, EventArgs^ e)
	{
		this->index = 0;
		this->nombreImages = 0;
	}
	void MyForm::MyForm_exit(Object^ sender, EventArgs^ e) {
		Application::ExitThread();
	}
	void MyForm::btn_source_Click(Object^ sender, EventArgs^ e)
	{
		int i;

		this->fld_source->ShowDialog();

		this->txt_source->Text = this->fld_source->SelectedPath;

		this->listeDeFichier = NS_services::CLserviceFichier::explorer(this->txt_source->Text);

		this->txt_rslt->Text = "";
		for (i = 0; i < this->listeDeFichier->Length; i++)
		{
			this->txt_rslt->Text += this->listeDeFichier[i] + "\r\n";
		}

		try {
			this->pctBx->Image = NS_services::CLserviceImage::lireImage(this->listeDeFichier[this->index]);
		}
		catch (System::ArgumentException^ e) {
			this->listeDeFichier = nullptr;
		}
		catch (System::IndexOutOfRangeException^ e) {
			this->pctBx->Image = nullptr;
		}
	}
	void MyForm::btn_destination_Click(Object^ sender, EventArgs^ e)
	{
		this->fld_destination->ShowDialog();
		this->txt_destination->Text = this->fld_destination->SelectedPath;
	}
	void MyForm::btn_first_Click(Object^ sender, EventArgs^ e)
	{
		if (!this->listeDeFichier)
			return;
		this->index = 0;
		this->pctBx->Image = NS_services::CLserviceImage::lireImage(this->listeDeFichier[this->index]);
	}
	void MyForm::btn_proceder_Click(Object^ sender, EventArgs^ e)
	{
		String^ res;
		if (this->rdb_copier->Checked)
		{
			res = NS_services::CLserviceFichier::copier(this->listeDeFichier, this->txt_destination->Text);
			if (res != nullptr) {
				this->erreur_fichier(res);
				return;
			}
			this->txt_rslt->Text = "Les fichiers ont été copiés dans le dossier : " + this->txt_destination->Text;
		}
		else if (this->rdb_coiperEffacer->Checked)
		{
			res = NS_services::CLserviceFichier::copierEffacer(this->listeDeFichier, this->txt_destination->Text);
			if (res != nullptr) {
				this->erreur_fichier(res);
				return;
			}
			this->txt_rslt->Text = "Les fichiers ont été copiés dans le dossier : " + this->txt_destination->Text;
		}
		else if (this->rdb_effacer->Checked) {
			NS_services::CLserviceFichier::effacer(this->listeDeFichier);
			if (res != nullptr) {
				this->erreur_fichier(res);
				return;
			}
			this->txt_rslt->Text = "Les fichiers source sélectionnés ont bien été effacés.";
		}
	}

	void MyForm::btn_next_Click(Object^ sender, EventArgs^ e)
	{
		if (!this->listeDeFichier)
			return;
		if (this->index < this->listeDeFichier->Length - 1)
		{
			this->index++;
			this->pctBx->Image = NS_services::CLserviceImage::lireImage(this->listeDeFichier[this->index]);
		}
	}
	void MyForm::btn_previous_Click(Object^ sender, EventArgs^ e)
	{
		if (!this->listeDeFichier)
			return;
		if (this->index > 0)
		{
			this->index--;
			this->pctBx->Image = NS_services::CLserviceImage::lireImage(this->listeDeFichier[this->index]);
		}
	}
	void MyForm::btn_last_Click(Object^ sender, EventArgs^ e)
	{
		if (!this->listeDeFichier)
			return;
		this->index = this->listeDeFichier->Length - 1;
		this->pctBx->Image = NS_services::CLserviceImage::lireImage(this->listeDeFichier[this->index]);
	}
	void MyForm::erreur_fichier(String^ msg) {
		this->txt_rslt->Text = "Erreur: " + msg + "\r\n";
	}
}

