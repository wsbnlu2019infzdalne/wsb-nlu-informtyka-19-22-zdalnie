/**
 * @author Paweł Michalik
 * @brief Train module, with Train class and methods for adding and removing both passengers and carriages.
 * @date 25.04.2020
 */
#include <iostream>;
using namespace std;

class Train
{
    /**
     * @brief Train class definition.
     */
    private:
        int carriage_count;
        int carriage_capacity;
        int occupied_seats_count;

    public:
    Train(int _carriage_count, int _carriage_capacity)
    {
        /**
         * @brief Train class constructor.
         *
         * @param carriage_count        <int>   Count of carriages pulled by train.
         * @param carriage_capacity     <int>   Capacity of a single carriage.
         * @param occupied_seats_count  <int>   Count of occupied seats in train.
         */
        this->carriage_count = _carriage_count;
        this->carriage_capacity = _carriage_capacity;
        this->occupied_seats_count = 0;
    }

    // METHODS
    int getTrainCapacity()const;
    void addCarriages(int carriage_to_add);
    void removeCarriages(int carriage_to_remove);
    bool addPassengers(int passengers_to_add);
    bool removePassengers(int passengers_to_remove);
    void showCurrentPassengersCount()const;
    void showTrainInfo()const;

};
int Train::getTrainCapacity()const {
    /**
     * @brief Calculates current train capacity.
     * @return <int>    Carriages count.
     */
    return this->carriage_count * this->carriage_capacity;
}
void Train::showCurrentPassengersCount()const {
    /**
     * @brief Prints out current passengers count.
     * @return <void>
     */
    cout << "Currently train has " << this->occupied_seats_count << " passenger(s) on board. Train capacity is "
         << getTrainCapacity() << "." << endl;
}
void Train::addCarriages(int carriage_to_add=1) {
    /**
     * @brief Increase carriages number within Train object. Prints out current Train state.
     * @param carriage_to_add   <int>   Number of carriages to be added to Train object.
     * @return <void>
     */
    this->carriage_count += carriage_to_add;
    cout << "Adding " << carriage_to_add << " carriage(s)..." << endl;
    cout << carriage_to_add << " carriage(s) added." << endl;
    showTrainInfo();
}
void Train::removeCarriages(int carriage_to_remove=1) {
    /**
     * @brief Increase carriages number within Train object. Prints out current Train state.
     * @param carriage_to_add   <int>   Number of carriages to be added to Train object, default = 1.
     * @return <void>
     */
    int new_train_capacity = (this->carriage_count - carriage_to_remove) * this->carriage_capacity;
    cout << "Removing " << carriage_to_remove << " carriage(s)..." << endl;
    if(this->carriage_count - carriage_to_remove >= 0 and this->occupied_seats_count < new_train_capacity)
    {
        this->carriage_count -= carriage_to_remove;
        cout << "Removed " << carriage_to_remove << " carriage(s)." << endl;
        showTrainInfo();
    }
    else
    {
        cout << "Attempted to remove " << carriage_to_remove << " carriage(s) out of " << this->carriage_count << "."
             << endl;
        showCurrentPassengersCount();
        cout << "This action would decrease train capacity to " << new_train_capacity << "." << endl;
        cout << "Removing carriage(s) with passengers on board is not possible." << endl;
        cout << "FORBIDDEN ACTION!" << endl;
        cout << "Decrease number of carriages to be removed and try again." << endl;
        cout << "---------------------------------------------------------------------------------------------" << endl;
    }

}
bool Train::addPassengers(int passengers_to_add=1)
{
    /**
     * @brief Increase passengers count within Train object. Prints out current Train state.
     * @param passengers_to_add, <int> Number of passengers to be added to Train object, default = 1.
     * @return <bool>, true if passengers can be added, false when it is not possible.
     */
    cout << "Adding " << passengers_to_add << " passenger(s)..." << endl;
    if(this->occupied_seats_count <= getTrainCapacity()
       and getTrainCapacity() >= this->occupied_seats_count + passengers_to_add)
    {
        this->occupied_seats_count += passengers_to_add;
        cout << "Added " << passengers_to_add << " passenger(s)." << endl;
        showTrainInfo();
        return true;
    }
    else {
        cout << "Currently train has " << this->occupied_seats_count << " passengers. Train capacity is "
        << getTrainCapacity() << "." << endl;
        cout << "Only " << getTrainCapacity() - this->occupied_seats_count
             << " seats still available, but you want to add " << passengers_to_add << " new passengers." << endl;
        cout << "ACTION FORBIDDEN!" << endl;
        cout << "Decrease number of passengers to be added and try again." << endl;
        cout << "---------------------------------------------------------------------------------------------" << endl;
        return false;
    }
}
bool Train::removePassengers(int passengers_to_remove=1)
{
    /**
     * @brief Decrease passengers count within Train object. Prints out current Train state.
     * @param passengers_to_remove, <int> Number of passengers to be removed from Train object, default = 1.
     * @return <bool>, true if passengers can be removed, false when it is not possible.
     */
    cout << "Removing " << passengers_to_remove << " passenger(s)..." << endl;
    if(this->occupied_seats_count > getTrainCapacity()
       and this->occupied_seats_count - passengers_to_remove > 0)
    {
        this->occupied_seats_count -= passengers_to_remove;
        cout << "Removed " << passengers_to_remove << " passenger(s)." << endl;
        showTrainInfo();
        return true;
    }
    else {
        cout << "Currently train has " << this->occupied_seats_count << " passengers." << endl;
        cout << "Attempted to remove more [" << passengers_to_remove << "] passengers than currently present on the "
             << "train [" << this->occupied_seats_count << "]." << endl;
        cout << "ACTION FORBIDDEN!" << endl;
        cout << "Decrease number of passengers to be removed and try again." << endl;
        cout << "---------------------------------------------------------------------------------------------" << endl;
        return false;
    }

}
void Train::showTrainInfo() const {
    /**
     * @brief Prints out current Train state.
     * @return <void>
     */
    cout << "---------------------------------------------------------------------------------------------" << endl;
    cout << "Train status:" << endl;
    cout << "   Capacity: " << getTrainCapacity() << endl;
    cout << "   Seats occupied: " << this->occupied_seats_count << endl;
    cout << "   Carriages count: " << this->carriage_count << endl;
    cout << "   Carriage capacity: " << this->carriage_capacity << endl;
    cout << "---------------------------------------------------------------------------------------------" << endl;
}

int main()
{
    /// Create train
    Train * train = new Train(5, 40);
    train->showCurrentPassengersCount();

    /// Demonstrate Train class capabilities
    train->addPassengers(80);
    train->removePassengers(91);
    train->addCarriages();
    train->removeCarriages(5);
    train->addPassengers(240 );
    delete train;
};