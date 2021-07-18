#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);
    disableAll();
    match = new Match();
    setChanceNumbers();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::disableAll() {
    ui->pushButton_82->setEnabled(false);
    ui->pushButton_51->setEnabled(false);
    ui->pushButton_81->setEnabled(false);
    ui->pushButton_79->setEnabled(false);
    ui->pushButton_78->setEnabled(false);
    ui->pushButton_77->setEnabled(false);
    ui->pushButton_76->setEnabled(false);
    ui->pushButton_75->setEnabled(false);
    ui->pushButton_74->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_96->setEnabled(false);
    ui->pushButton_95->setEnabled(false);
    ui->pushButton_84->setEnabled(false);
    ui->pushButton_94->setEnabled(false);
    ui->pushButton_86->setEnabled(false);
    ui->pushButton_92->setEnabled(false);
    ui->pushButton_88->setEnabled(false);
    ui->pushButton_85->setEnabled(false);
    ui->pushButton_87->setEnabled(false);
    ui->pushButton_93->setEnabled(false);
    ui->pushButton_91->setEnabled(false);
    ui->pushButton_90->setEnabled(false);
    ui->pushButton_89->setEnabled(false);
    ui->pushButton_97->setEnabled(false);
    ui->pushButton_98->setEnabled(false);
    ui->pushButton_99->setEnabled(false);
    ui->pushButton_100->setEnabled(false);
    ui->pushButton_101->setEnabled(false);
    ui->pushButton_102->setEnabled(false);
    ui->pushButton_103->setEnabled(false);
    ui->pushButton_104->setEnabled(false);
    ui->pushButton_106->setEnabled(false);
    ui->pushButton_107->setEnabled(false);
    ui->pushButton_108->setEnabled(false);
    ui->pushButton_109->setEnabled(false);
    ui->pushButton_110->setEnabled(false);
    ui->pushButton_124->setEnabled(false);
    ui->pushButton_123->setEnabled(false);
    ui->pushButton_122->setEnabled(false);
    ui->pushButton_121->setEnabled(false);
    ui->pushButton_120->setEnabled(false);
    ui->pushButton_119->setEnabled(false);
    ui->pushButton_118->setEnabled(false);
    ui->pushButton_117->setEnabled(false);
    ui->pushButton_116->setEnabled(false);
    ui->pushButton_115->setEnabled(false);
    ui->pushButton_114->setEnabled(false);
    ui->pushButton_113->setEnabled(false);
    ui->pushButton_112->setEnabled(false);
    ui->pushButton_111->setEnabled(false);
    ui->pushButton_125->setEnabled(false);
    ui->pushButton_126->setEnabled(false);
    ui->pushButton_127->setEnabled(false);
    ui->pushButton_128->setEnabled(false);
    ui->pushButton_129->setEnabled(false);
    ui->pushButton_130->setEnabled(false);
    ui->pushButton_132->setEnabled(false);
    ui->pushButton_131->setEnabled(false);
    ui->pushButton_133->setEnabled(false);
    ui->pushButton_134->setEnabled(false);
    ui->pushButton_135->setEnabled(false);
    ui->pushButton_136->setEnabled(false);
    ui->pushButton_137->setEnabled(false);
    ui->pushButton_173->setEnabled(false);
    ui->pushButton_154->setEnabled(false);
    ui->pushButton_163->setEnabled(false);
    ui->pushButton_165->setEnabled(false);
    ui->pushButton_157->setEnabled(false);
    ui->pushButton_153->setEnabled(false);
    ui->pushButton_151->setEnabled(false);
    ui->pushButton_141->setEnabled(false);
    ui->pushButton_167->setEnabled(false);
    ui->pushButton_146->setEnabled(false);
    ui->pushButton_144->setEnabled(false);
    ui->pushButton_148->setEnabled(false);
    ui->pushButton_175->setEnabled(false);
    ui->pushButton_170->setEnabled(false);
    ui->pushButton_166->setEnabled(false);
    ui->pushButton_169->setEnabled(false);
    ui->pushButton_142->setEnabled(false);
    ui->pushButton_150->setEnabled(false);
    ui->pushButton_80->setEnabled(false);
    ui->pushButton_160->setEnabled(false);
    ui->pushButton_176->setEnabled(false);
    ui->pushButton_138->setEnabled(false);
    ui->pushButton_139->setEnabled(false);
    ui->pushButton_156->setEnabled(false);
    ui->pushButton_159->setEnabled(false);
    ui->pushButton_152->setEnabled(false);
    ui->pushButton_143->setEnabled(false);
    ui->pushButton_140->setEnabled(false);
    ui->pushButton_149->setEnabled(false);
    ui->pushButton_147->setEnabled(false);
    ui->pushButton_145->setEnabled(false);
    ui->pushButton_52->setEnabled(false);
    ui->pushButton_26->setEnabled(false);
    ui->pushButton_28->setEnabled(false);
    ui->pushButton_29->setEnabled(false);
    ui->pushButton_27->setEnabled(false);
    ui->pushButton_50->setEnabled(false);
    ui->pushButton_53->setEnabled(false);
    ui->pushButton_44->setEnabled(false);
    ui->pushButton_43->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_72->setEnabled(false);
    ui->pushButton_54->setEnabled(false);
    ui->pushButton_45->setEnabled(false);
    ui->pushButton_46->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton->setEnabled(false);
    ui->pushButton_71->setEnabled(false);
    ui->pushButton_55->setEnabled(false);
    ui->pushButton_47->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_25->setEnabled(false);
    ui->pushButton_23->setEnabled(false);
    ui->pushButton_24->setEnabled(false);
    ui->pushButton_21->setEnabled(false);
    ui->pushButton_20->setEnabled(false);
    ui->pushButton_70->setEnabled(false);
    ui->pushButton_56->setEnabled(false);
    ui->pushButton_48->setEnabled(false);
    ui->pushButton_49->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    ui->pushButton_19->setEnabled(false);
    ui->pushButton_18->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->pushButton_22->setEnabled(false);
    ui->pushButton_58->setEnabled(false);
    ui->pushButton_41->setEnabled(false);
    ui->pushButton_40->setEnabled(false);
    ui->pushButton_13->setEnabled(false);
    ui->pushButton_14->setEnabled(false);
    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
    ui->pushButton_68->setEnabled(false);
    ui->pushButton_57->setEnabled(false);
    ui->pushButton_42->setEnabled(false);
    ui->pushButton_39->setEnabled(false);
    ui->pushButton_32->setEnabled(false);
    ui->pushButton_31->setEnabled(false);
    ui->pushButton_33->setEnabled(false);
    ui->pushButton_30->setEnabled(false);
    ui->pushButton_67->setEnabled(false);
    ui->pushButton_59->setEnabled(false);
    ui->pushButton_60->setEnabled(false);
    ui->pushButton_38->setEnabled(false);
    ui->pushButton_37->setEnabled(false);
    ui->pushButton_35->setEnabled(false);
    ui->pushButton_36->setEnabled(false);
    ui->pushButton_34->setEnabled(false);
    ui->pushButton_66->setEnabled(false);
    ui->pushButton_61->setEnabled(false);
    ui->pushButton_62->setEnabled(false);
    ui->pushButton_63->setEnabled(false);
    ui->pushButton_64->setEnabled(false);
    ui->pushButton_65->setEnabled(false);
    ui->pushButton_73->setEnabled(false);
}

void MainWindow::setChanceNumbers() {
    // get numbers formatted
    QString chanceNumbersStr = match->getPlayer()->sendToServer(QString("ChanceNumbers"));
    // deformat the numbers string
    QStringList chanceNumsList = chanceNumbersStr.split(".");

    // setting the lineEdits numbers
    ui->TileNumber->setText(chanceNumsList[0]);
    ui->TileNumber_2->setText(chanceNumsList[1]);
    ui->TileNumber_3->setText(chanceNumsList[2]);
    ui->TileNumber_4->setText(chanceNumsList[3]);
    ui->TileNumber_5->setText(chanceNumsList[4]);
    ui->TileNumber_6->setText(chanceNumsList[5]);
    ui->TileNumber_7->setText(chanceNumsList[6]);
    ui->TileNumber_8->setText(chanceNumsList[7]);
    ui->TileNumber_9->setText(chanceNumsList[8]);
    ui->TileNumber_10->setText(chanceNumsList[9]);
    ui->TileNumber_11->setText(chanceNumsList[10]);
    ui->TileNumber_12->setText(chanceNumsList[11]);
    ui->TileNumber_13->setText(chanceNumsList[12]);
    ui->TileNumber_14->setText(chanceNumsList[13]);
    ui->TileNumber_15->setText(chanceNumsList[14]);
    ui->TileNumber_16->setText(chanceNumsList[15]);
    ui->TileNumber_17->setText(chanceNumsList[16]);
    ui->TileNumber_18->setText(chanceNumsList[17]);
    ui->TileNumber_19->setText(chanceNumsList[18]);
    ui->TileNumber_20->setText(chanceNumsList[19]);
    ui->TileNumber_21->setText(chanceNumsList[20]);
    ui->TileNumber_22->setText(chanceNumsList[21]);
    ui->TileNumber_23->setText(chanceNumsList[22]);
    ui->TileNumber_24->setText(chanceNumsList[23]);
    ui->TileNumber_25->setText(chanceNumsList[24]);
    ui->TileNumber_26->setText(chanceNumsList[25]);
    ui->TileNumber_27->setText(chanceNumsList[26]);
    ui->TileNumber_28->setText(chanceNumsList[27]);


}



void MainWindow::on_pushButton_51_clicked() {
   setPictureForRoad();
}


void MainWindow::on_pushButton_82_clicked() {
   setPictureForHouse();
}

void MainWindow::on_pushButton_81_clicked()
{
  setPictureForHouse();
}


void MainWindow::on_pushButton_79_clicked()
{
   setPictureForHouse();
}


void MainWindow::on_pushButton_78_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_77_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_76_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_75_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_74_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_2_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_96_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_95_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_84_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_94_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_86_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_92_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_88_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_85_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_87_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_93_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_91_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_90_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_89_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_97_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_98_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_99_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_100_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_101_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_102_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_103_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_104_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_105_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_106_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_107_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_108_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_109_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_110_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_124_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_123_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_122_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_121_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_120_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_119_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_118_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_117_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_116_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_115_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_114_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_113_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_112_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_111_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_125_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_126_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_127_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_128_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_129_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_130_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_132_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_131_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_133_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_134_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_135_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_136_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_137_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_173_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_154_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_163_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_165_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_157_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_153_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_151_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_141_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_167_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_146_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_144_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_148_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_175_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_170_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_166_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_169_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_142_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_150_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_80_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_160_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_176_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_138_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_139_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_156_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_159_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_152_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_143_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_140_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_149_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_147_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_145_clicked()
{
    setPictureForHouse();
}


void MainWindow::on_pushButton_52_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_26_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_28_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_29_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_27_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_50_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_53_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_44_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_43_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_9_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_7_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_5_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_6_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_72_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_54_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_45_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_46_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_10_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_8_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_4_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_3_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_71_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_55_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_47_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_11_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_25_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_23_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_24_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_21_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_20_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_70_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_56_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_48_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_49_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_12_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_19_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_18_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_17_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_22_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_69_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_58_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_41_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_40_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_13_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_14_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_15_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_16_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_68_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_57_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_42_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_39_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_32_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_31_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_33_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_30_clicked()
{

}


void MainWindow::on_pushButton_67_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_59_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_60_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_38_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_37_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_35_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_36_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_34_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_66_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_61_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_62_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_63_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_64_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_65_clicked()
{
    setPictureForRoad();
}


void MainWindow::on_pushButton_73_clicked()
{
    setPictureForRoad();
}

void MainWindow::setPictureForHouse(QString address)
{
    // check requirements for building

    if (match->getPlayer()->getNumOfWood() >= 1 && match->getPlayer()->getNumOfBrick() >= 1
            && match->getPlayer()->getNumOfSheep() >= 1 && match->getPlayer()->getNumOfWheat() >= 1) {
        QPixmap pixmap(":/new/prefix1/house-model-1.png");
        QIcon icon(pixmap);

        ui->pushButton_82->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseBrick();
        match->getPlayer()->decreaseSheep();
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseWheat();
    }
}

void MainWindow::setPictureForHouse()
{
    QString address = getPictureHouseType();
    // check requirements for building
    if (match->getPlayer()->getNumOfWood() >= 1 && match->getPlayer()->getNumOfBrick() >= 1
            && match->getPlayer()->getNumOfSheep() >= 1 && match->getPlayer()->getNumOfWheat() >= 1) {

        // set the picture
        QPixmap pixmap(address);
        QIcon icon(pixmap);

        ui->pushButton_82->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseBrick();
        match->getPlayer()->decreaseSheep();
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseWheat();
    }
}

void MainWindow::setPictureForRoad()
{
    QString address = getPictureRoadType();
    // check requirements for building road
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {

        // set picture
        QPixmap pixmap(address);
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}

QString MainWindow::getPictureHouseType() {
    if (match->getPlayer()->getPlayerColor() == Red) {
        return ":/new/prefix1/house-model-red.png";

    } else if (match->getPlayer()->getPlayerColor() == Green) {
        return ":/new/prefix1/house-model-green.png";

    } else if (match->getPlayer()->getPlayerColor() == Blue) {
        return ":/new/prefix1/house-model-blue.png";

    } else if (match->getPlayer()->getPlayerColor() == Yellow) {
        return ":/new/prefix1/house-model-yellow.png";

    } else
        return "-1";
}

QString MainWindow::getPictureRoadType() {
    if (match->getPlayer()->getPlayerColor() == Red) {
        return ":/new/prefix1/road-red.png";

    } else if (match->getPlayer()->getPlayerColor() == Green) {
         return ":/new/prefix1/road-green.png";

    } else if (match->getPlayer()->getPlayerColor() == Blue) {
         return ":/new/prefix1/road-blue.png";

    } else if (match->getPlayer()->getPlayerColor() == Yellow) {
         return ":/new/prefix1/road-yellow.png";

    } else
        return "-1";

}

void MainWindow::on_RollDice_clicked() {
    // get dice value from server
    int diceValue = match->getPlayer()->diceButton();

    // set text value
    QString Rolled = QString::number(diceValue);
    ui->RolledNumber->setText(Rolled);

}
