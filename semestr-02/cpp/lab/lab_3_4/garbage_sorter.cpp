/**
 * @class MultiContainerRecyclingBin.
 * @brief Class can be used to sort various types of litter.
 * @author Paweł Michalik.
 * @date 04.05.2020.
 */
#include <iostream>;
#include <string>;
using namespace std;

enum LitterType { plastic, glass, paper };

LitterType litter_type;

class MultiContainerRecyclingBin
{
    /**
     * @brief MultiContainerRecyclingBin class definition.
     */
    private:
        int plastic_bin_volume;
        int glass_bin_volume;
        int paper_bin_volume;
        int current_plastic_bin_load;
        int current_glass_bin_load;
        int current_paper_bin_load;
        bool addItemsIfPossible(string item_type, int items_to_add, int &bin_volume, int &current_bin_load);
        bool addItems(LitterType litter_type, int items_to_add);
        bool removeItemsIfPossible(string item_type, int items_to_remove, int &current_bin_load);
        bool removeItems(LitterType litter_type, int items_to_remove);
        bool emptyBin(LitterType litter_type);

    public:
        MultiContainerRecyclingBin(int _plastic_bin_volume , int _glass_bin_volume, int _paper_bin_volume)
        {
            /**
             * @brief MultiContainerRecyclingBin class constructor.
             *
             * @param _plastic_bin_volume  <int>   Volume of a bin for plastic waste, value represents amount of
             *                                     single litter items tht can be dropped into bin.
             * @param _glass_bin_volume    <int>   Volume of a bin for plastic waste, value represents amount of
             *                                     single litter items tht can be dropped into bin.
             * @param _paper_bin_volume    <int>   Volume of a bin for plastic waste, 1value represents amount of
             *                                     single litter items tht can be dropped into bin.
             */
            this->plastic_bin_volume = _plastic_bin_volume;
            this->glass_bin_volume = _glass_bin_volume;
            this->paper_bin_volume = _paper_bin_volume;
            this->current_plastic_bin_load = 0;
            this->current_glass_bin_load = 0;
            this->current_paper_bin_load = 0;
        }

        /// Methods declaration
        bool addPlasticItems(int items_to_add);
        bool addGlassItems(int items_to_add);
        bool addPaperItems(int items_to_add);
        bool removePlasticItems(int items_to_remove);
        bool removeGlassItems(int items_to_remove);
        bool removePaperItems(int items_to_remove);
        void emptyPlasticBin();
        void emptyGlassBin();
        void emptyPaperBin();
        void showCurrentMultiContainerRecyclingBinStatus()const;
};

/// Private methods implementation
bool MultiContainerRecyclingBin::addItems(LitterType litter_type, int items_to_add) {
    /**
     * @brief Increase litter items number within respective bin.
     * @bried litter_type <LitterType>, enum either, plastic, glass ot paper
     * @param items_to_add   <int>   Number of items to be added to respective bin.
     * @return <bool>
     */
    switch(litter_type)
    {
        case plastic:
        {
            return addItemsIfPossible(
                    "plastic",items_to_add, this->plastic_bin_volume, this->current_plastic_bin_load);
        }
        case glass:
        {
            return addItemsIfPossible(
                    "glass", items_to_add, this->glass_bin_volume, this->current_glass_bin_load);
        }
        case paper:
        {
            return addItemsIfPossible(
                    "paper", items_to_add, this->paper_bin_volume, this->current_paper_bin_load);
        }
    }
}

bool MultiContainerRecyclingBin::addItemsIfPossible(string item_type, int items_to_add, int &bin_volume, int &current_bin_load)
{
    /**
     * @brief Increase litter items within the bin.
     * @param item_type <string>, enum either, plastic, glass ot paper
     * @param items_to_add   <int>   Number of items to be added to respective bin.
     * @return <bool>
     */
    cout << "---------------------------------------------------------------------------------------------" << endl;
    cout << "Attempting to add " << items_to_add << " item(s) to " << item_type << " bin..." << endl;
    if(bin_volume >= current_bin_load + items_to_add)
    {
        current_bin_load += items_to_add;
        cout << "Added " << items_to_add << " item(s) to " << item_type << " bin [" << items_to_add << "/"
        << bin_volume << "]."<< endl;
        return true;
    }
    else
    {
        int volume_left = bin_volume - current_bin_load;
        cout << "Volume of " << item_type << " bin is: " << bin_volume << " item(s)." << endl;
        cout << "Current bin load is: " << current_bin_load << " items." << endl;
        cout << "Only " << volume_left << " more items can be added to the bin." << endl;
        cout << "Overloading bin is an FORBIDDEN ACTION!!!" << endl;
        return false;
    }
}

bool MultiContainerRecyclingBin::removeItems(LitterType litter_type, int items_to_remove) {
    /**
     * @brief Increase garage items number within  object. Prints out current Train state.
     * @param items_to_add   <int>   Number of carriages to be added to Train object.
     * @return <bool>
     */
    switch(litter_type)
    {
        case plastic:
        {
            return removeItemsIfPossible(
                    "plastic", items_to_remove, this->current_plastic_bin_load);
        }
        case glass:
        {
            return removeItemsIfPossible(
                    "glass", items_to_remove, this->current_glass_bin_load);
        }
        case paper:
        {
            return removeItemsIfPossible(
                    "paper", items_to_remove, this->current_paper_bin_load);
        }
    }
}

bool MultiContainerRecyclingBin::removeItemsIfPossible(string item_type, int items_to_remove, int &current_bin_load) {
    cout << "---------------------------------------------------------------------------------------------" << endl;
    cout << "Attempting to remove " << items_to_remove << " item(s) from " << item_type << " bin..." << endl;
    if(current_bin_load - items_to_remove >= 0)
    {
        current_bin_load -= items_to_remove;
        cout << "Removed " << items_to_remove << " item(s) from " << item_type << " bin. " << current_bin_load
             << " items left in " << item_type << " bin."<< endl;
        return true;
    }
    else
    {
        cout << "Attempted removal of " << items_to_remove << " item(s) from " << item_type << "bin"
             << "but currently " << item_type <<  " bin has " << current_bin_load << endl;
        cout << "Removing more items than in the bin or from empty bin is an FORBIDDEN ACTION!!!" << endl;
        return false;
    }
}

bool MultiContainerRecyclingBin::emptyBin(LitterType litter_type) {
    /**
     * @brief Increase garage items number within  object. Prints out current Train state.
     * @param items_to_add   <int>   Number of carriages to be added to Train object.
     * @return <bool>
     */
    switch(litter_type)
    {
        case plastic:
        {
            this->current_plastic_bin_load = 0;
            cout << "---------------------------------------------------------------------------------------------"
                 << endl;
            cout << "Plastic bin has been emptied" << endl;
            cout << "---------------------------------------------------------------------------------------------"
                 << endl;
            return true;
        }
        case glass:
        {
            this->current_glass_bin_load = 0;
            cout << "---------------------------------------------------------------------------------------------"
                 << endl;
            cout << "Glass bin has been emptied" << endl;
            cout << "---------------------------------------------------------------------------------------------"
                 << endl;
            return true;
        }
        case paper:
        {
            this->current_paper_bin_load = 0;
            cout << "---------------------------------------------------------------------------------------------"
                 << endl;
            cout << "Paper bin has been emptied" << endl;
            cout << "---------------------------------------------------------------------------------------------"
                 << endl;
            return true;
        }
    }

}

/// Public methods implementation
bool MultiContainerRecyclingBin::addPlasticItems(int items_to_add=1)
{
    return addItems(plastic, items_to_add);
}

bool MultiContainerRecyclingBin::addGlassItems(int items_to_add=1)
{
    return addItems(glass, items_to_add);
}

bool MultiContainerRecyclingBin::addPaperItems(int items_to_add=1)
{
    return addItems(paper, items_to_add);
}

bool MultiContainerRecyclingBin::removePlasticItems(int items_to_remove=1)
{
    return removeItems(plastic, items_to_remove);
}

bool MultiContainerRecyclingBin::removeGlassItems(int items_to_remove=1)
{
    return removeItems(glass, items_to_remove);
}

bool MultiContainerRecyclingBin::removePaperItems(int items_to_remove=1)
{
    return removeItems(paper, items_to_remove);
}

void MultiContainerRecyclingBin::emptyPlasticBin()
{
    emptyBin(plastic);
}

void MultiContainerRecyclingBin::emptyGlassBin()
{
    emptyBin(glass);
}

void MultiContainerRecyclingBin::emptyPaperBin()
{
    emptyBin(paper);
}

void MultiContainerRecyclingBin::showCurrentMultiContainerRecyclingBinStatus()const
{
    cout << "-- RECYCLING BIN STATUS ---------------------------------------------------------------------" << endl;
    cout << "Plastic container: [" << this->current_plastic_bin_load << "/" << this->plastic_bin_volume << "]"
         << endl;
    cout << "Glass container:   [" << this->current_glass_bin_load << "/" << this->glass_bin_volume << "]"
         << endl;
    cout << "Paper container:   [" << this->current_paper_bin_load << "/" << this->paper_bin_volume << "]"
         << endl;
}

int main()
{
    MultiContainerRecyclingBin *bin = new MultiContainerRecyclingBin(25, 15, 35);
    bin->addPlasticItems(5);
    bin->addGlassItems(10);
    bin->addPaperItems(15);
    bin->showCurrentMultiContainerRecyclingBinStatus();
    bin->removePlasticItems(2);
    bin->removeGlassItems(3);
    bin->removePaperItems(4);
    bin->showCurrentMultiContainerRecyclingBinStatus();
    bin->emptyPlasticBin();
    bin->showCurrentMultiContainerRecyclingBinStatus();
    bin->emptyGlassBin();
    bin->showCurrentMultiContainerRecyclingBinStatus();
    bin->emptyPaperBin();
    bin->showCurrentMultiContainerRecyclingBinStatus();
}