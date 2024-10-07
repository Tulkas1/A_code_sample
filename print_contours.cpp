class PrintAllContours{
    private:
        ofstream output_stream;
    public:
        std::vector<double*>  all_contours;
        std::vector<double> all_contour_sizes;
        std::vector<string> all_contour_names;
        int number_of_contours;
        void print_all_contours();
    PrintAllContours(){
        number_of_contours=0;
    }
};

void PrintAllContours::print_all_contours(){
    int i,j;
    for(i=0; i<number_of_contours; i++){
        output_stream.open(all_contour_names[i]);
        for(j=0; j<all_contour_sizes[i]; j++){
            output_stream<<all_contours[i][j]<<endl;
        }
        output_stream.close();
    }
};
