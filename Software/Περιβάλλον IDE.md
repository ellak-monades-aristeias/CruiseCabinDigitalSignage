# Περιβάλλον Arduino IDE

Ο προγραμματισμός του μικροεπεξεργαστή γίνεται μέσω του περιβάλλοντος IDE που
προσφέρει ελεύθερα η κοινότητα Arduino. 

Τη γλώσσα προγραμματισμού αποτελεί μια ψευδογλώσσα μορφής C++ όπου γίνεται compile μέσω του
περιβάλλοντος και έπειτα φορτώνεται στη μνήμη του μικροεπεξεργαστή. Ο κώδικας είναι σε μια
συνεχή επανάληψη, ελέγχοντας τα pins εισόδου και ανταποκρίνεται ανάλογα στα pin εξόδου από τη
στιγμή που εφαρμόζεται τάση λειτουργίας.

![ide](https://raw.githubusercontent.com/ellak-monades-aristeias/CruiseCabinDigitalSignage/master/Images/IDE_interface.png)

Αρχικά στο κύκλωμα εφαρμόζεται εξωτερική τάση είτε κατευθείαν στην ανάλογη θύρα ή μέσω του
καλωδίου σύνδεσης USB με τον υπολογιστή.

Έπειτα το πρόγραμμα γίνεται compile και φορτώνεται στον μικροεπεξεργαστή.
Ανοίγουμε την σειριακή οθόνη από το περιβάλλον Arduino IDE και το πρόγραμμα τρέχει στην
πλακέτα.

- Εμφανίζεται στην οθόνη το μήνυμα “ Give the Room Number : “ .Ο μικροεπεξεργαστής
αναμένει την απάντηση από τον χειριστή του τερματικού

![give number](https://raw.githubusercontent.com/ellak-monades-aristeias/CruiseCabinDigitalSignage/master/Images/IDE_serial_screen.png)

- Έστω ότι αναζητείται ο κώδικας για τη καμπίνα 11260

![11260](https://raw.githubusercontent.com/ellak-monades-aristeias/CruiseCabinDigitalSignage/master/Images/IDE_serial_input.png)

Στην οθόνη θα επιστραφεί το μήνυμα του κώδικα για το συγκεκριμένο δωμάτιο και θα
εμφανιστεί ο ανάλογος αριθμός και χρώμα στο seven segment led display και RGB led
αντίστοιχα. Δηλαδή το O RED

![0 red](https://raw.githubusercontent.com/ellak-monades-aristeias/CruiseCabinDigitalSignage/master/Images/IDE_serial_return.png)

Ο κωδικός θα παραμείνει φωτεινός μέχρι την είσοδο του επιβάτη στην καμπίνα, όπου θα
ενεργοποιείται και η NC επαφή. Στην προκειμένη περίπτωση το button στο pin 02

Μπορείτε να δείτε τα τμήματα κώδικα που χρησιμοποιήθηκαν για την ολοκλήρωση του προγράμματος στο φάκελο [source-code](https://github.com/ellak-monades-aristeias/CruiseCabinDigitalSignage/tree/master/Software/Source-Code) όπως και να τα κατεβάσετε απ'τα [παραδοτέα source-code](https://github.com/ellak-monades-aristeias/CruiseCabinDigitalSignage#Παραδοτέα-Έργου)
