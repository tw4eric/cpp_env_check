#ifndef ENVCHECK_HH_
#define ENVCHECK_HH_


namespace CCNEnvCheck {
	class EnvCheck{
		public:
	        void printNumbers()const;
		private:
	};

    class EnvChecker {
        public:
            virtual ~EnvChecker() {}
            virtual bool returnABool() = 0;
    };

}


#endif /* ENVCHECK_HH_ */
