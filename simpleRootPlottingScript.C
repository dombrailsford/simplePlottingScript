{
  //This is a very simple plotting script that can produce 1D histograms contained in a .root file and save them into a .ps file, giving each plot a page to itself.  This can then be converted into a pdf file using the linux program ps2pdf
  //It is normally easy enough to plot histograms using the TBrowser, however, the number of histograms you produce can quickly become very large and
  //the following method always works well and quickly.  The main idea is that each histogram is cloned into an array. This allows you to loop over every histogram quickly to batch alter properties and plot sequentially.

  //First specify some global properties of the plots, AKA the plots visible when copied into a report
  gStyle->SetHistLineWidth(3);
  gStyle->SetHistFillColor(kBlue);
  gStyle->SetLabelSize(0.05,"X");
  gStyle->SetLabelSize(0.05,"Y");
  gStyle->SetTitleXSize(0.05);


  //Now specify the number of histograms you will be plotting.  Specifying a number here makes increasing the number of plots a lot easier (less editting to do).
  int num = 30;

  //now specify the location and name of the root file you wish to open
  TFile *myFile = new TFile("path/to/my/file.root");
  //access the file in root
  myFile->cd();

  //now specify the array of histograms
  TH1F *myHistArray[num];

  //myHistogramX should be the name of your histogram in the root file you are accessing
  TH1F *myHistArray[0] =  (TH1F*)  myHistogram0 ->Clone();  
  TH1F *myHistArray[1] =  (TH1F*)  myHistogram1 ->Clone();
  TH1F *myHistArray[2] =  (TH1F*)  myHistogram2 ->Clone();
  TH1F *myHistArray[3] =  (TH1F*)  myHistogram3 ->Clone();
  TH1F *myHistArray[4] =  (TH1F*)  myHistogram4 ->Clone();
  TH1F *myHistArray[5] =  (TH1F*)  myHistogram5 ->Clone();
  TH1F *myHistArray[6] =  (TH1F*)  myHistogram6 ->Clone();
  TH1F *myHistArray[7] =  (TH1F*)  myHistogram7 ->Clone();
  TH1F *myHistArray[8] =  (TH1F*)  myHistogram8 ->Clone();
  TH1F *myHistArray[9] =  (TH1F*)  myHistogram9 ->Clone();
  TH1F *myHistArray[10] = (TH1F*)  myHistogram10->Clone();
  TH1F *myHistArray[11] = (TH1F*)  myHistogram11->Clone();
  TH1F *myHistArray[12] = (TH1F*)  myHistogram12->Clone();
  TH1F *myHistArray[13] = (TH1F*)  myHistogram13->Clone();
  TH1F *myHistArray[14] = (TH1F*)  myHistogram14->Clone();
  TH1F *myHistArray[15] = (TH1F*)  myHistogram15->Clone();
  TH1F *myHistArray[16] = (TH1F*)  myHistogram16->Clone();
  TH1F *myHistArray[17] = (TH1F*)  myHistogram17->Clone();
  TH1F *myHistArray[18] = (TH1F*)  myHistogram18->Clone();
  TH1F *myHistArray[19] = (TH1F*)  myHistogram19->Clone();
  TH1F *myHistArray[20] = (TH1F*)  myHistogram20->Clone();
  TH1F *myHistArray[21] = (TH1F*)  myHistogram21->Clone();
  TH1F *myHistArray[22] = (TH1F*)  myHistogram22->Clone();
  TH1F *myHistArray[23] = (TH1F*)  myHistogram23->Clone();
  TH1F *myHistArray[24] = (TH1F*)  myHistogram24->Clone();
  TH1F *myHistArray[25] = (TH1F*)  myHistogram25->Clone();
  TH1F *myHistArray[26] = (TH1F*)  myHistogram26->Clone();
  TH1F *myHistArray[27] = (TH1F*)  myHistogram27->Clone();
  TH1F *myHistArray[28] = (TH1F*)  myHistogram28->Clone();
  TH1F *myHistArray[29] = (TH1F*)  myHistogram29->Clone();



  //I've included the option of opening a second root file to plot another set of histograms.  Useful for doing comparisons, amongst other things
  TFile *myFile2 = new TFile("path/to/my/secondFile.root");
  myFile2->cd();
  TH1F *mySecondHistArray[num];
  TH1F *mySecondHistArray[0] =  (TH1F*)  myHistogram0 ->Clone(); 
  TH1F *mySecondHistArray[1] =  (TH1F*)  myHistogram1 ->Clone();
  TH1F *mySecondHistArray[2] =  (TH1F*)  myHistogram2 ->Clone();
  TH1F *mySecondHistArray[3] =  (TH1F*)  myHistogram3 ->Clone();
  TH1F *mySecondHistArray[4] =  (TH1F*)  myHistogram4 ->Clone();
  TH1F *mySecondHistArray[5] =  (TH1F*)  myHistogram5 ->Clone();
  TH1F *mySecondHistArray[6] =  (TH1F*)  myHistogram6 ->Clone();
  TH1F *mySecondHistArray[7] =  (TH1F*)  myHistogram7 ->Clone();
  TH1F *mySecondHistArray[8] =  (TH1F*)  myHistogram8 ->Clone();
  TH1F *mySecondHistArray[9] =  (TH1F*)  myHistogram9 ->Clone();
  TH1F *mySecondHistArray[10] = (TH1F*)  myHistogram10->Clone();
  TH1F *mySecondHistArray[11] = (TH1F*)  myHistogram11->Clone();
  TH1F *mySecondHistArray[12] = (TH1F*)  myHistogram12->Clone();
  TH1F *mySecondHistArray[13] = (TH1F*)  myHistogram13->Clone();
  TH1F *mySecondHistArray[14] = (TH1F*)  myHistogram14->Clone();
  TH1F *mySecondHistArray[15] = (TH1F*)  myHistogram15->Clone();
  TH1F *mySecondHistArray[16] = (TH1F*)  myHistogram16->Clone();
  TH1F *mySecondHistArray[17] = (TH1F*)  myHistogram17->Clone();
  TH1F *mySecondHistArray[18] = (TH1F*)  myHistogram18->Clone();
  TH1F *mySecondHistArray[19] = (TH1F*)  myHistogram19->Clone();
  TH1F *mySecondHistArray[20] = (TH1F*)  myHistogram20->Clone();
  TH1F *mySecondHistArray[21] = (TH1F*)  myHistogram21->Clone();
  TH1F *mySecondHistArray[22] = (TH1F*)  myHistogram22->Clone();
  TH1F *mySecondHistArray[23] = (TH1F*)  myHistogram23->Clone();
  TH1F *mySecondHistArray[24] = (TH1F*)  myHistogram24->Clone();
  TH1F *mySecondHistArray[25] = (TH1F*)  myHistogram25->Clone();
  TH1F *mySecondHistArray[26] = (TH1F*)  myHistogram26->Clone();
  TH1F *mySecondHistArray[27] = (TH1F*)  myHistogram27->Clone();
  TH1F *mySecondHistArray[28] = (TH1F*)  myHistogram28->Clone();
  TH1F *mySecondHistArray[29] = (TH1F*)  myHistogram29->Clone();




  //Now all of the histograms pretty properties can be changed en masse.  So in this case, myHistArray will be plotted using bars as normal and mySecondHistArray 
  //will be plotted using markers (for a data/MonteCarlo comparison
  for (int i = 0;i < num; i++)
  {
    myHistArray[i]->SetFillColor(0);
    mySecondHistArray[i]->SetMarkerStyle(2);
  }

  //Now finally all of the plots can be plotted.  To ensure all of the plots have their own page in the ps file, th formatting has to be a little odd.

  //First make a canvase
  TCanvas *myCanvas = new TCanvas("myCanvas");

  //Now the first page of the ps file must be plotted, we ensure the ps file remains open my keeping an open bracket in the file name below
  //So myHistArray[0] and mySecondHistArray[0] will make the first plot of the ps file
  myHistArray[0]->DrawNormalized();
  mySecondHistArray[0]->DrawNormalized("psame");
  //keep psFile open with the open bracket
  myCanvas->Print("psFile.ps(");

  //now loop from 1 to num-1 to plot the majority of them
  for (int n = 1; n < (num-1); n++)
  {
    myHistArray[n]->DrawNormalized();
    mySecondHistArray[n]->DrawNormalized("psame");
    //no need for an open or close bracket here
    myCanvas->Print("psFile.ps");
  }

  //finally make the last plot and close the ps file
    myHistArray[num-1]->DrawNormalized();
    mySecondHistArray[num-1]->DrawNormalized("psame");
    //close the ps file with the close bracket
    myCanvas->Print("psFile.ps)");
}

